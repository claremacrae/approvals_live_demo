set(EXE_NAME BeforeApprovals)
set(CMAKE_CXX_STANDARD 17)
add_executable(${EXE_NAME}
        main.cpp
        first_test.cpp
        )
target_link_libraries(${EXE_NAME}
        CONAN_PKG::catch2)
target_compile_definitions(${EXE_NAME} PRIVATE CATCH_CONFIG_FAST_COMPILE)
add_test(NAME ${EXE_NAME} COMMAND ${PROJECT_NAME})
