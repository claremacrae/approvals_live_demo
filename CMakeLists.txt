cmake_minimum_required(VERSION 3.8)

# Provide path for scripts
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/CMake")

project(demo)

include(Conan)
run_conan()

set(CMAKE_VERBOSE_MAKEFILE off)

add_subdirectory(shared_code)

enable_testing()
add_subdirectory(01HelloApprovals)
