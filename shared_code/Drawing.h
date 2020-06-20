#ifndef DEMO_DRAWING_H
#define DEMO_DRAWING_H

#include <string>

class Drawing
{
public:
    // File names are in resources sub-directory, relative to the
    // location of this source code.
    explicit Drawing(const std::string& source_svg_file);

    std::string content() const;

private:
    std::string m_source_svg_file;
};

#endif //DEMO_DRAWING_H
