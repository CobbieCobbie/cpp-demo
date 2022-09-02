# small-cpp-project
This repository serves as a small introduction for a second year student lecture in order to successfully compile, run and understand the basics of a simple cpp project.


## General overview

While C Projects inherit header / implementation files in .h / .c format, C++ Projects hold .hpp / .cpp format. It is still possible to use .h files in C++.


## Prequisites
g++, CMake


## How to compile
For compilation, g++ is used. The build setup is defined by CMake. Just open the workspace in a shell and simply type

`cmake --build .`

g++ will create an object from every implementation / header pair in the first step, followed by linking the objects to an executable. Thus, it will not work to build the main file "stand-alone". After successful compilation and build, run the executable by calling:

`./prog`

This is the name defined in CMake and the executable is performed in the shell.

## How to unit test
For unit tests, the framework doctest is used. It throws a standalone binary with all unit tests defined in unit_tests.cpp. To execute the unit tests, call

`./test`
