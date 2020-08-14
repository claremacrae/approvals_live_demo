#ifndef DEMO_DATEUTILITIES_H
#define DEMO_DATEUTILITIES_H

#include <chrono>
#include <iomanip>
#include <sstream>

namespace DateUtilities
{
    tm toUtc( time_t& tt );

    template <typename T>
    static std::string toString( const T& contents )
    {
        std::stringstream s;
        s << contents;
        return s.str();
    }

    std::string
    toString( const std::chrono::system_clock::time_point& dateTime,
              const std::string& format );
}

#endif //DEMO_DATEUTILITIES_H
