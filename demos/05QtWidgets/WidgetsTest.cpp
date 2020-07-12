#include <catch2/catch.hpp>
#include <ApprovalTestsQt.hpp>

#include <QImage>
#include <QTableWidget>

#include "helpers/QImageExamples.h"
#include "helpers/QTableWidgetExamples.h"

using namespace ApprovalTests;
using namespace ApprovalTestsQt;

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

// TODO 3: Run this, and understand the output
TEST_CASE( "It approves QImages" )
{
    auto defaultReporterDisposer = Approvals::useAsDefaultReporter(
        std::make_shared<Mac::BeyondCompareReporter>() );

    auto default_namer_disposer =
        SeparateApprovedAndReceivedDirectoriesNamer::
            useAsDefaultNamer();

    std::vector<const char*> colors = {
        "red", "green", "blue", "purple" };
    for ( const auto& color : colors )
    {
        SECTION( color )
        {
            QImage image = QImageExamples::createImage( color );
            ApprovalTestsQt::verifyQImage( image );
        }
    }

    // TODO 4: Write each image to a separate file
    // Catch2: SECTION()
    //  https://approvaltestscpp.readthedocs.io/en/latest/generated_docs/MultipleOutputFilesPerTest.html

    // TODO 5: Make it easier to approve the output
    // a) AutoApproveReporter
    // b) SeparateApprovedAndReceivedDirectoriesNamer
    //  https://approvaltestscpp.readthedocs.io/en/latest/generated_docs/Namers.html#separateapprovedandreceiveddirectoriesnamer
}
