#ifndef DEMO_DATEUTILITIES_H
#define DEMO_DATEUTILITIES_H

#include <chrono>
#include <iomanip>
#include <sstream>

namespace DateUtilities
{
    tm toUtc(time_t& tt)
    {
#ifdef _MSC_VER // Visual Studio compiler
        std::tm tm_value = {};
        gmtime_s(&tm_value, &tt);
#else
        tm tm_value = *gmtime(&tt);
#endif
        return tm_value;
    }

    template <typename T> static std::string toString(const T& contents)
    {
        std::stringstream s;
        s << contents;
        return s.str();
    }

    std::string toString(const std::chrono::system_clock::time_point& dateTime,
                         const std::string& format)
    {
        time_t tt = std::chrono::system_clock::to_time_t(dateTime);
        tm tm_value = toUtc(tt);

        return toString(std::put_time(&tm_value, format.c_str()));
    }

}

#endif //DEMO_DATEUTILITIES_H
