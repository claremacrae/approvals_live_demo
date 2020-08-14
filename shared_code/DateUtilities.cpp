#include "DateUtilities.h"
#include "StringUtilities.h"

#include <iomanip>

namespace DateUtilities
{
    tm toUtc( time_t& tt )
    {
#ifdef _MSC_VER // Visual Studio compiler
        std::tm tm_value = {};
        gmtime_s( &tm_value, &tt );
#else
        tm tm_value = *gmtime( &tt );
#endif
        return tm_value;
    }

    std::string
    toString( const std::chrono::system_clock::time_point& dateTime,
              const std::string& format )
    {
        time_t tt = std::chrono::system_clock::to_time_t( dateTime );
        tm tm_value = toUtc( tt );

        return StringUtilities::toString( std::put_time( &tm_value, format.c_str() ) );
    }

    std::string
    toString( const std::chrono::system_clock::time_point& dateTime )
    {
        return toString( dateTime, "%F %T UTC" );
    }
}
