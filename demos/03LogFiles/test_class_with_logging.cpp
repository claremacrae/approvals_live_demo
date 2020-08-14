#include <catch2/catch.hpp>
#include <ApprovalTests.hpp>

#include "ComplexOperation.h"

using namespace ApprovalTests;

// TODO Make this test of ComplexOperation::doStuff() pass,
//      to enable refactoring work to start...

TEST_CASE( "Test ComplexOperation Log" )
{
    // Arrange
    auto filename = Approvals::getDefaultNamer()->getReceivedFile(".log");
    std::ofstream stream( filename );

    // Act
    ComplexOperation stuff;
    stuff.doStuff( stream );

    stream.close();

    // Assert
    Approvals::verifyExistingFile(filename);
}
