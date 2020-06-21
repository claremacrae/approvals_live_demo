cmake_minimum_required(VERSION 3.8)

# Provide path for scripts
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/CMake")

project(demo)

set(CMAKE_VERBOSE_MAKEFILE off)

set(DEMOS_ENABLE_CODE_COVERAGE TRUE)
if (DEMOS_ENABLE_CODE_COVERAGE)
    message(INFO " Code Coverage Enabled")
    include(CodeCoverage)
    append_coverage_compiler_flags()
endif ()

add_subdirectory(shared_code)
add_subdirectory(third_party)

enable_testing()
add_subdirectory(HelloApprovals)
add_subdirectory(SVGFiles)
