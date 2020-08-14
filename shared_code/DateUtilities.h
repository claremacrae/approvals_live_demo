#ifndef DEMO_DATEUTILITIES_H
#define DEMO_DATEUTILITIES_H

#include <chrono>
#include <iomanip>

namespace DateUtilities
{
    tm toUtc( time_t& tt );

    std::string
    toString( const std::chrono::system_clock::time_point& dateTime,
              const std::string& format );
}

#endif //DEMO_DATEUTILITIES_H
