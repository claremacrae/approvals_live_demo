#include "ComplexOperation.h"
#include "Logger.h"

#include <chrono>
#include <iomanip>
#include <sstream>

namespace
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

std::string convertSystemClockToString(const std::chrono::time_point<std::chrono::system_clock>& end)
{
    const std::string format = "%F %T";
    return toString(end, format);
}

void logTimeAndStep( Logger& logger, const std::string& step )
{
    auto end = std::chrono::system_clock::now();
    logger << step << " at " << convertSystemClockToString(end) << '\n';
}

void ComplexOperation::doStuff( std::ostream& stream )
{
    Logger logger( stream );

    logTimeAndStep( logger, "started computation" );

    logger << "Doing step 1" << '\n';
    logger << "Doing step 2 - part 1" << '\n';
    logger << "Doing step 2 - part 2" << '\n';
    logger << "Doing step 3 - testing if part 2 worked" << '\n';
    for ( int i = 1; i <= 7; ++i )
    {
        logger << "Step 4 - section " << i << '\n';
    }

    logTimeAndStep( logger, "finished computation" );

    logger << "Done!\n";
}
