if(ENABLE_DOCTESTS)
    add_compile_definitions(ENABLE_DOCTEST_LIBRARY)
    include(FetchContent)
    FetchContent_Declare(
        DocTest
        GIT_REPOSITORY "https://github.com/doctest/doctest.git"
        GIT_TAG "b7c21ec5ceeadb4951b00396fc1e4642dd347e5f" # version 2.4.9
    )
    FetchContent_MakeAvailable(Doctest)
    include_directories(${DOCTEST_INCLUDE_DIR})
endif()
