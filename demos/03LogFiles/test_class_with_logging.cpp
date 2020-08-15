#include <catch2/catch.hpp>
#include <ApprovalTests.hpp>

#include "ComplexOperation.h"

using namespace ApprovalTests;

// Testing non-deterministic code

// TODO Make this test of ComplexOperation::doOperation() pass,
//      to enable refactoring work to start...

TEST_CASE( "Test ComplexOperation Log" )
{
    // Arrange
    ComplexOperation operation;

    auto filename = Approvals::getDefaultNamer()->getReceivedFile(".log");

    // Act
    operation.doOperation( filename );

    // Assert
    Approvals::verifyExistingFile( filename );
}
