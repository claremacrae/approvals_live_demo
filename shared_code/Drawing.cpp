#include "Drawing.h"
#include "FileUtilities.h"

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
    return FileUtilities::readFileThrowIfMissing(svgFile);
}
