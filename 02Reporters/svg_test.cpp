#include "SVGDrawing.h"
#include "SVGReporter.h"

#include <catch2/catch.hpp>
#include <ApprovalTests.hpp>

using namespace ApprovalTests;

void verifyDrawing(const SVGDrawing& drawing)
{
    Approvals::verify(drawing.content(),
                      Options(SVGReporter())
                          .fileOptions()
                          .withFileExtension(".svg"));
}

TEST_CASE("SVG Test")
{
    SVGDrawing drawing("drawing1.svg");
    verifyDrawing(drawing);
}

TEST_CASE("SVG Test 2")
{
    SVGDrawing drawing("drawing2.svg");
    verifyDrawing(drawing);
}
