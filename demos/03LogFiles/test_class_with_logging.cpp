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
    auto filename = Approvals::getDefaultNamer()->getReceivedFile(".log");
    {
        std::ofstream stream( filename );
        stuff.doStuff( stream );
    }
    auto dateRegex = R"([A-Za-z]{3} [A-Za-z]{3} [\d ]\d \d\d:\d\d:\d\d \d\d\d\d)";
    auto replacement = "[date-and-time]";
    // Scrubber
    auto scrubber = Scrubbers::createRegexScrubber(dateRegex, replacement);

    Approvals::verifyExistingFile(filename, Options().withScrubber(scrubber));
}
