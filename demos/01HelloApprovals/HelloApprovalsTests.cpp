#include "HelloApprovals.h"
#include <catch2/catch.hpp>
#include "ApprovalTests.hpp"

// TODO 1 Run and then fix this test

TEST_CASE( "helloApprovals" )
{
    CHECK( HelloApprovals::helloApprovals() == "Hello Approvals" );
}

// TODO 2 Test HelloApprovals::helloPoetry("Vogon")

TEST_CASE( "helloPoetry" )
{
    //CHECK( HelloApprovals::helloPoetry("Vogon") == "?" );
    ApprovalTests::Approvals::verify(HelloApprovals::helloPoetry("Vogon"));
}


/*
 https://github.com/approvals/ApprovalTests.cpp/releases
 https://github.com/approvals/ApprovalTests.cpp.StarterProject
 https://conan.io/center/approvaltests.cpp/10.1.0/
*/
