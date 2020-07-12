#include <catch2/catch.hpp>
#include <QImage>
#include <QTableWidget>
#include "ApprovalTestsQt.hpp"

#include "QImageExamples.h"
#include "QTableWidgetExamples.h"

namespace
{
} // namespace

TEST_CASE( "It approves a QImage" )
{
    auto color = "#800080";
    QImage image = QImageExamples::createImage( color );
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
