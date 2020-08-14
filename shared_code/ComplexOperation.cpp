#include "ComplexOperation.h"
#include "Logger.h"

#include "DateUtilities.h"

std::string convertSystemClockToString(const std::chrono::time_point<std::chrono::system_clock>& end)
{
    return DateUtilities::toString(end);
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
