#include "HelloApprovals.h"
#include <catch2/catch.hpp>
#include <ApprovalTests.hpp>

#include "ComplexOperation.h"
#include <iostream>

using namespace ApprovalTests;

// TODO Write a test for the log output from ComplexOperation::doStuff()
//      to enable refactoring work...

TEST_CASE( "Test ComplexOperation Log" )
{
    ComplexOperation stuff;
    //stuff.doStuff( std::cout );

    // Get a filename
    auto filename =
        Approvals::getDefaultNamer()->getReceivedFile( ".log" );

    {
        // Open the output file:
        std::ofstream stream( filename );

        // Do stuff - write to the file
        stuff.doStuff( stream );

        // Close the file
    }

    //Approvals::verifyExistingFile( filename );

    // Example matches:
    // Mon Jun  2 14:07:34 2020
    // Mon Jun 22 14:07:34 2020
    const auto dateRegex =
        R"([A-Za-z]{3} [A-Za-z]{3} [\d ]\d \d\d:\d\d:\d\d \d\d\d\d)";

    Approvals::verifyExistingFile(
        filename,
        Options().withScrubber( Scrubbers::createRegexScrubber(
            dateRegex, "[date_and_time]" ) ) );
}
