#include "PNGViewingReporter.h"

bool PNGViewingReporter::report(std::string received,
                                std::string approved) const
{
    // received and approved are files in graphics format
    std::string receivedAsPNG = convertToPNG(received);
    std::string approvedAsPNG = convertToPNG(approved);
    ApprovalTests::Mac::BeyondCompareReporter beyondCompareReporter;
    return beyondCompareReporter.report(receivedAsPNG, approvedAsPNG);
}

std::string
PNGViewingReporter::convertToPNG(std::string graphicsFile) const
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
