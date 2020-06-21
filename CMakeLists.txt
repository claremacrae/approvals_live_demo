cmake_minimum_required(VERSION 3.8)

# Provide path for scripts
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/CMake")

project(demo)

set(CMAKE_VERBOSE_MAKEFILE off)

include(CodeCoverage)
append_coverage_compiler_flags()

add_subdirectory(shared_code)
add_subdirectory(third_party)

enable_testing()
add_subdirectory(HelloApprovals)
add_subdirectory(SVGFiles)
