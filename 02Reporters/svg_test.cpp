#include "SVGDrawing.h"

#include <catch2/catch.hpp>
#include <ApprovalTests.hpp>

using namespace ApprovalTests;

void verifyDrawing(const SVGDrawing& drawing)
{
    Approvals::verify(drawing.content(),
                      Options(Mac::BeyondCompareReporter())
                          .fileOptions()
                          .withFileExtension(".svg"));
}

TEST_CASE("SVG Test")
{
    SVGDrawing drawing("drawing1.svg");
    verifyDrawing(drawing);
}

// TODO Test "drawing1.svg" as well
