#!/usr/bin/env bash

delete_coverage_gcda_files.sh

rm -f  demos/01HelloApprovals/HelloApprovalsTests.helloPoetry.*.txt
rm -rf demos/02GildedRose/tests/approval_tests/
rm -rf demos/03LogFiles/*.received.*
rm -rf demos/03LogFiles/*.approved.*
rm -f  demos/04SVGFiles/approval_tests/*.received.*
rm -f  demos/04SVGFiles/approval_tests/*.png
rm -rf demos/05QtWidgets/approval_tests/
