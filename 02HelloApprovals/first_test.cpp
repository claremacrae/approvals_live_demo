#include <catch2/catch.hpp>
#include "ApprovalTests.hpp"

TEST_CASE("First Test")
{
    ApprovalTests::Approvals::verify("Hello Approvals");
}
