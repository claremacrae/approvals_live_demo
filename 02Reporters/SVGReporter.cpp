#include "SVGReporter.h"

bool SVGReporter::report(std::string received,
                         std::string approved) const
{
    // received and approved are files in SVG format
    std::string receivedAsPNG = convertToPNG(received);
    std::string approvedAsPNG = convertToPNG(approved);
    ApprovalTests::Mac::BeyondCompareReporter beyondCompareReporter;

    // First show the differences in the converted .png files:
    beyondCompareReporter.report(receivedAsPNG, approvedAsPNG);

    // Then show the text differences in .svg files:
    return beyondCompareReporter.report(received, approved);
}

std::string SVGReporter::convertToPNG(std::string graphicsFile) const
{
    std::filesystem::path inputPath(graphicsFile);
    std::string extension = inputPath.extension();
    auto outputPath = inputPath;
    outputPath.replace_extension("png");
    if (inputPath != outputPath)
    {
        auto path =
            "/Applications/Inkscape.app/Contents/MacOS/inkscape";
        auto arguments =
            "--export-overwrite --export-filename={Approved} "
            "{Received}";
        auto pngConverter =
            ApprovalTests::CustomReporter::create(path, arguments);
        bool success = pngConverter->report(inputPath, outputPath);
        if (!success)
        {
            throw std::runtime_error("Failed to convert " +
                                     inputPath.string() + " to " +
                                     outputPath.string());
        }
    }

    return outputPath;
}
