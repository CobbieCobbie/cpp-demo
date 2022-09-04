# CMake version 3.22.1 is used at the time of setup
cmake_minimum_required(VERSION 3.12)

# Project name
project(CppDemo VERSION 1.0)

# add libraries
add_subdirectory(Graph)
add_subdirectory(GeometricShapes)

# add doctest module
option(ENABLE_DOCTESTS "Include doctest v2.4.9 checked out from git for unit test executable." ON)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${PROJECT_SOURCE_DIR}/DoctestModule/")
include(Doctest)

# executable
add_executable(CppDemo main.cpp)
add_executable(CppUnitTests unit_tests.cpp)

# linking
target_link_libraries(CppDemo PUBLIC Rectangle Triangle Graph Vertex)
target_link_libraries(CppUnitTests PUBLIC doctest Rectangle Triangle Graph)


# config header file
configure_file(CppDemo_config.h.in CppDemo_config.h)

# C++ Standard

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

target_include_directories(CppDemo PUBLIC
                            "${PROJECT_BINARY_DIR}"
                            "${PROJECT_SOURCE_DIR}/GeometricShapes"
                            "${PROJECT_SOURCE_DIR}/Graph"
                           )


target_include_directories(CppUnitTests PUBLIC
                            "${PROJECT_BINARY_DIR}"
                            "${PROJECT_SOURCE_DIR}/GeometricShapes"
                            "${PROJECT_SOURCE_DIR}/Graph"
                            )

