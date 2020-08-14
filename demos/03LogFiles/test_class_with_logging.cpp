#include <catch2/catch.hpp>
#include <ApprovalTests.hpp>

#include "ComplexOperation.h"

using namespace ApprovalTests;

// TODO Make this test of ComplexOperation::doStuff() pass,
//      to enable refactoring work to start...

TEST_CASE( "Test ComplexOperation Log" )
{
    // Arrange
    ComplexOperation stuff;

    auto filename = Approvals::getDefaultNamer()->getReceivedFile(".log");
    std::ofstream stream( filename );

    // Act
    stuff.doStuff( stream );

    // Assert
    stream.close();
    Approvals::verifyExistingFile(filename);
}
