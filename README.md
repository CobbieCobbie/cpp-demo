# small-cpp-project (Algorithmics lecture WS21/22)
This repository serves as a small introduction for a second year student lecture in order to successfully compile, run and understand the basics of a simple cpp project.


## General overview

While C Projects inherit header / implementation files in .h / .c format, C++ Projects hold .hpp / .cpp format. It is still possible to use .h files in C++. 


## Prequisites
gcc, make


## How to compile
For compilation, gcc and Make is used. The command is put in a Makefile. Just open the workspace in a shell and simply type 

`make`

gcc will create an object from every implementation / header pair in the first step, followed by linking the objects to an executable. Thus, it will not work to build the main file "stand-alone". After successful compilation and build, run the executable by calling:

`./rect`

This is the name defined in the Makefile and the executable is performed in the shell.
