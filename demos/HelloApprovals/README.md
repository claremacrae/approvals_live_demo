# HelloApprovals

This intentionally trivial example shows:

## Starting Point

* Traditional unit test
* How tests are sometimes written
* Inputs and outputs from tests are both in the code

## main.cpp

* Help messages (misconfigured main) rather than error messages
    * With CLion, do need to be using CLion 2020.2 EAP or later
* Setting up your main
* Which test frameworks are supported

## first_test.cpp

* Reporter
    * Diff tool popping if there are differences to show
    * No diff tool popping up if test passes
* Separation of test code and data
* Namespace ApprovalTests
* Automated naming of output files
    * approved.txt
    * received.txt
