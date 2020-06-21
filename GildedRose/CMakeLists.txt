set(EXE_NAME GildedRose)

set(CMAKE_CXX_STANDARD 17)
add_executable(${EXE_NAME}
        main.cpp
        GildedRose.cc
        GildedRose.h
        GildedRoseTest.cpp
        GildedRoseApprovals.cpp
        )
target_link_libraries(${EXE_NAME}
        ApprovalTests::ApprovalTests
        Catch2::Catch2
        )
target_compile_definitions(${EXE_NAME} PRIVATE CATCH_CONFIG_FAST_COMPILE)
add_test(NAME ${EXE_NAME} COMMAND ${EXE_NAME})
