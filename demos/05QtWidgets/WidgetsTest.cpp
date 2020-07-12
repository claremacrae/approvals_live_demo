#include <catch2/catch.hpp>
#include <QImage>
#include <QTableWidget>
#include "ApprovalTestsQt.hpp"

#include "QTableWidgetExamples.h"

namespace
{
} // namespace

TEST_CASE( "It approves a QImage" )
{
    QImage image( 100, 200, QImage::Format_RGB32 );
    auto color = "#800080";
    image.fill( color );
    ApprovalTestsQt::verifyQImage( image );
}

TEST_CASE( "It approves a QTableWidget" )
{
    // A note on naming: QTableWidget is a concrete class that implements
    // the more general QTableView. Here we create a QTableWidget,
    // for convenience.

    QTableWidget tableWidget;
    QTableWidgetExamples::populateTable( tableWidget );
    ApprovalTestsQt::verifyQTableView( tableWidget );
}
