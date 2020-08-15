#include "ComplexOperation.h"

#include <fstream>

#include "spdlog/spdlog.h"
#include "spdlog/sinks/ostream_sink.h"

void logTimeAndStep( spdlog::logger& logger, const std::string& step )
{
    logger.info( step );
}

void ComplexOperation::doStuff( std::ostream& stream )
{
    auto sink =
        std::make_shared<spdlog::sinks::ostream_sink_mt>( stream );
    auto logger = spdlog::logger( "ComplexOperation", sink );

    logTimeAndStep( logger, "started computation" );

    logger.info( "Doing step 1" );
    logger.info( "Doing step 2 - part 1" );
    logger.info( "Doing step 2 - part 2" );
    logger.info( "Doing step 3 - testing if part 2 worked" );
    for ( int i = 1; i <= 7; ++i )
    {
        logger.info( "Step 4 - section " + std::to_string( i ) );
    }

    logTimeAndStep( logger, "finished computation" );

    logger.info( "Done!" );
}

void ComplexOperation::doStuff( const std::string& filename )
{
    std::ofstream outputStream( filename );
    doStuff( outputStream );
}
