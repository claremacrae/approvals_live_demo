#include "Drawing.h"
#include <catch2/catch.hpp>
#include <ApprovalTests.hpp>

using namespace ApprovalTests;

TEST_CASE("SVG Test")
{
    Drawing drawing;
    Approvals::verify(drawing, [](const auto& drawing, auto& stream) {
        stream << drawing.content();
    });
}
