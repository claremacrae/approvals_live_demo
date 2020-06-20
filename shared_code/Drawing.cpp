#include "Drawing.h"
#include "FileUtilities.h"

#include <filesystem>

std::string Drawing::content() const
{
    std::filesystem::path sourceFile(__FILE__);
    auto directory = sourceFile.remove_filename();
    auto svgFile = directory / "resources" / "drawing1.svg";
    return FileUtilities::readFileThrowIfMissing(svgFile);
}
