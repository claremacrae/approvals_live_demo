#!/usr/bin/env bash

delete_coverage_gcda_files.sh

rm -f demos/HelloApprovals/first_test.First_Test.*.txt
rm -f demos/GildedRose/tests/approval_tests/*.txt
rm -f demos/LogFiles/approval_tests/*
rm -f demos/SVGFiles/approval_tests/*
