#include "HelloApprovals.h"
#include <catch2/catch.hpp>

#include "ComplexOperation.h"
#include <iostream>

// TODO Write a test for the log output from ComplexOperation::doStuff()
//      to enable refactoring work...

TEST_CASE( "Test ComplexOperation Log" )
{
    ComplexOperation stuff;
    stuff.doStuff( std::cout );
}
