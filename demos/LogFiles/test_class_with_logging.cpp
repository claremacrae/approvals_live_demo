#include "HelloApprovals.h"
#include <catch2/catch.hpp>

#include "ComplexOperation.h"
#include <iostream>

// TODO Convert this to an approval test

TEST_CASE("First Test")
{
    ComplexOperation stuff;
    stuff.doStuff(std::cout);
}
