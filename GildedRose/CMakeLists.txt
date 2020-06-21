set(EXE_NAME GildedRose)

set(CMAKE_CXX_STANDARD 17)
add_executable(${EXE_NAME}
        main.cpp
        lib/GildedRose.cc
        lib/GildedRose.h
        GildedRoseTest.cpp
        GildedRoseApprovals.cpp
        )
target_link_libraries(${EXE_NAME}
        ApprovalTests::ApprovalTests
        Catch2::Catch2
        )
target_compile_definitions(${EXE_NAME} PRIVATE CATCH_CONFIG_FAST_COMPILE)
add_test(NAME ${EXE_NAME} COMMAND ${EXE_NAME})

set(COVERAGE_TARGET ${EXE_NAME}_branch_coverage)
set(COVERAGE_EXCLUDES
        ${COVERAGE_EXCLUDES}
        ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/GildedRoseApprovals.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/GildedRoseTest.cpp
        )
setup_target_for_coverage_lcov(
        NAME ${COVERAGE_TARGET}
        EXECUTABLE ${EXE_NAME}
        DEPENDENCIES ${EXE_NAME})
