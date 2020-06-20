#include "HelloApprovals.h"
#include <catch2/catch.hpp>

TEST_CASE("First Test")
{
    CHECK(HelloApprovals::helloApprovals() == "Hello Approvals");
}
