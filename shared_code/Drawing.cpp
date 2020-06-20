#include "Drawing.h"
#include "FileUtilities.h"
#include "StringUtilities.h"

#include <filesystem>

Drawing::Drawing(const std::string& source_svg_file)
    : m_source_svg_file(source_svg_file)
{
}

std::string Drawing::content() const
{
    std::filesystem::path sourceFile(__FILE__);
    auto directory = sourceFile.remove_filename();
    auto svgFile = directory / "resources" / m_source_svg_file;

    std::string content =
        FileUtilities::readFileThrowIfMissing(svgFile);

    if (false)
    {
        // Hack to break the output, to demo test failure
        content = StringUtilities::replaceAll(
            content, "3.202323", "3.302323");
    }
    return content;
}
