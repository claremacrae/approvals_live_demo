set(EXE_NAME SVGFiles)
set(CMAKE_CXX_STANDARD 17)
add_executable(${EXE_NAME}
        main.cpp
        svg_test.cpp
        SVGReporter.cpp
        SVGReporter.h
        )
target_link_libraries(${EXE_NAME}
        shared_code::shared_code
        ApprovalTests::ApprovalTests
        Catch2::Catch2
        )
target_compile_definitions(${EXE_NAME} PRIVATE CATCH_CONFIG_FAST_COMPILE)
add_test(NAME ${EXE_NAME} COMMAND ${PROJECT_NAME})

set(COVERAGE_TARGET ${EXE_NAME}_branch_coverage)
setup_target_for_coverage_lcov(
        NAME ${COVERAGE_TARGET}
        EXECUTABLE ${EXE_NAME}
        DEPENDENCIES ${EXE_NAME})
