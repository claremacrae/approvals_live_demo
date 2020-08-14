#ifndef DEMO_STRINGUTILITIES_H
#define DEMO_STRINGUTILITIES_H

#include <sstream>
#include <string>

namespace StringUtilities
{
    std::string replaceAll( std::string inText,
                            const std::string& find,
                            const std::string& replaceWith );

    template <typename T>
    static std::string toString( const T& contents )
    {
        std::stringstream s;
        s << contents;
        return s.str();
    }
}

#endif //DEMO_STRINGUTILITIES_H
