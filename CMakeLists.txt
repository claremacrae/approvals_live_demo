cmake_minimum_required(VERSION 3.8)

# Provide path for scripts
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/CMake")

project(demo)

set(CMAKE_VERBOSE_MAKEFILE off)

# If building the code with clang gives 'Error: could not load cache'
#   1 turn COLLECT_CODE_COVERAGE to FALSE
#   2 build and run the tests
#   3 turn COLLECT_CODE_COVERAGE back to TRUE
set(COLLECT_CODE_COVERAGE TRUE)
if (COLLECT_CODE_COVERAGE)
    include(CodeCoverage)
    append_coverage_compiler_flags()
    set(COVERAGE_EXCLUDES
            "/Applications/Xcode.app/*"
            "/opt/local/*"
            "third_party/*"
            )
endif ()

add_subdirectory(shared_code)
add_subdirectory(third_party)

enable_testing()
add_subdirectory(HelloApprovals)
add_subdirectory(SVGFiles)
add_subdirectory(GildedRose)
