#!/usr/bin/env bash

delete_coverage_gcda_files.sh

rm -f demos/01HelloApprovals/first_test.First_Test.*.txt
rm -f demos/02GildedRose/tests/approval_tests/*.txt
rm -f demos/03LogFiles/approval_tests/*
#rm -f demos/04SVGFiles/approval_tests/*
