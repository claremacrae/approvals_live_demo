if (NOT TARGET spdlog)
    # Needs CMake 3.14 or above
    include(FetchContent)

    FetchContent_Declare(spdlog
            GIT_REPOSITORY https://github.com/gabime/spdlog.git
            GIT_TAG v1.7.0)

    FetchContent_MakeAvailable(spdlog)
endif ()
