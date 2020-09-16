#include <catch2/catch.hpp>
#include <ApprovalTestsQt.hpp>

#include <QTableWidget>

#include "helpers/QImageExamples.h"

using namespace ApprovalTests;
using namespace ApprovalTestsQt;

// TODO 3: Run this, and understand the output
TEST_CASE( "It approves QImages" )
{
//    auto defaultReporterDisposer = Approvals::useAsDefaultReporter(
//        std::make_shared<Mac::BeyondCompareReporter>() );

    std::vector<const char*> colors = {
        "red", "green", "blue", "purple" };
    for ( const auto& color : colors )
    {
        QImage image = QImageExamples::createImage( color );
        ApprovalTestsQt::verifyQImage( image );
    }
}

/*
    // TODO 4: Write each image to a separate file
    // Catch2: SECTION()
    //  https://approvaltestscpp.readthedocs.io/en/latest/generated_docs/MultipleOutputFilesPerTest.html
*/

/*
    // TODO 5: Make it easier to approve the output
    // a) AutoApproveReporter
    // b) SeparateApprovedAndReceivedDirectoriesNamer
    //  https://approvaltestscpp.readthedocs.io/en/latest/generated_docs/Namers.html#separateapprovedandreceiveddirectoriesnamer
*/
