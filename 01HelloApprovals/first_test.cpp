#include <catch2/catch.hpp>
#include "HelloApprovals.h"

TEST_CASE("First Test")
{
    CHECK(HelloApprovals::helloApprovals() == "Hello Approvals");
}
