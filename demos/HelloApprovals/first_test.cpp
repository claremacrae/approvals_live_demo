#include "HelloApprovals.h"
#include <catch2/catch.hpp>

// TODO Convert this to an approval test

TEST_CASE("First Test")
{
    CHECK(HelloApprovals::helloApprovals() == "Hello Approvals");
}
