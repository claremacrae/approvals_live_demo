#include "HelloApprovals.h"
#include <catch2/catch.hpp>
#include "ApprovalTests.hpp"

#include "ComplexOperation.h"

using namespace ApprovalTests;

// TODO Write a test for this

TEST_CASE("Test ComplexOperation Log")
{
    ComplexOperation stuff;

    // Get a filename
    const auto fileName =
        Approvals::getDefaultNamer()->getReceivedFile(".log");

    {
        // Create a stream to send the output to
        std::ofstream stream(fileName);

        // Do stuff
        stuff.doStuff(stream);

        // the log file is closed when the stream goes out of scope
    }

    // Verify the contents of the log from doing stuff
    const auto dateRegex =
        R"([A-Za-z]{3} [A-Za-z]{3} [\d ]\d \d\d:\d\d:\d\d \d\d\d\d)";

    Approvals::verifyExistingFile(
        fileName,
        Options(Scrubbers::createRegexScrubber(dateRegex,
                                               "[date_and_time]")));
}
