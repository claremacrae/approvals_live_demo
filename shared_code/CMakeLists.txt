set(LIB_NAME shared_code)
set(CMAKE_CXX_STANDARD 11)
add_library(${LIB_NAME}
        HelloApprovals.cpp
        HelloApprovals.h
        )
add_library(
        ${LIB_NAME}::${LIB_NAME}
        ALIAS
        ${LIB_NAME}
)
target_include_directories(${LIB_NAME}
        PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
