#include <catch2/catch.hpp>
#include <ApprovalTestsQt.hpp>

#include <QImage>
#include <QTableWidget>

#include "QImageExamples.h"
#include "QTableWidgetExamples.h"

// Scenario: Some code that mixes doing some calculations
//           with putting the results in to a table widget.
// TODO 1: Use ApprovalTestsQt to save the table content
// TODO 2: Review verifyQTableView()
TEST_CASE( "It approves a QTableWidget" )
{
    QTableWidget tableWidget;
    QTableWidgetExamples::populateTable( tableWidget );

    ApprovalTestsQt::verifyQTableView( tableWidget );
}

/*
// TODO 3: Approve the outputs of this test, conveniently
TEST_CASE( "It approves a QImage" )
{
    auto color = "#800080";
    QImage image = QImageExamples::createImage( color );
    ApprovalTestsQt::verifyQImage( image );
}
*/
