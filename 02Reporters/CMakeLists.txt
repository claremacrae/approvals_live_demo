set(EXE_NAME 02Reporters)
set(CMAKE_CXX_STANDARD 17)
add_executable(${EXE_NAME}
        main.cpp
        svg_test.cpp
        SVGReporter.cpp
        SVGReporter.h
        )
target_link_libraries(${EXE_NAME}
        shared_code::shared_code
        CONAN_PKG::approvaltests.cpp
        CONAN_PKG::catch2
        )
target_compile_definitions(${EXE_NAME} PRIVATE CATCH_CONFIG_FAST_COMPILE)
add_test(NAME ${EXE_NAME} COMMAND ${PROJECT_NAME})
