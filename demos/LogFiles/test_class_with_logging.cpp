#include "HelloApprovals.h"
#include <catch2/catch.hpp>

#include "ComplexOperation.h"
#include <iostream>

// TODO Write a test for this

TEST_CASE( "Test ComplexOperation Log" )
{
    ComplexOperation stuff;
    stuff.doStuff( std::cout );
}
