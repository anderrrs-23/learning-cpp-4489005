// Learning C++ 
// Exercise 03_05
// Using Several Source Files, by Eduardo Corpeño 

/*
General notes on Compiling Code:
- A compiler toolchain is a pipeline of software tools that convert source code into an executable file
    [source code] --> [compiler toolchain] --> [executable file]
- inputs can be:
    1. C++ source files --> compiler translates code to an Assembly file (human-readable version of native language of target CPU); --> Assembly file goes to assembler and produces an object file --> Linker
    2. Write Assembly code directly (generally a case when you need to write your own peripehral driver) --> assembler to produce an object file --> Linker
    3. Include libraries for which you only have access to the object files, NOT the source code --> Linker
Diagram
|  System   |     Case 1        |     Case 2      |     Case 3      |
---------------------------------------------------------------------
| Compiler  |  C++ Source File  |                 |                 |
|           |        |          |                 |                 |
|           |        V          |                 |                 |
| Assembler |   Assembly File   |  Assembly File  |                 |           
|           |        |          |        |        |                 |
|           |        V          |        V        |                 |
| Linker    |    Object File    |   Object File   |   Object File   |
---------------------------------------------------------------------
                        \                |                /
                          \              |              /
                            \            |            /
                              \          |          /
                                \        |        /
                                  \      |      /
                                    \    |    /
                                      \  |  /
                                        \|/
                                         V           
                          [   Executable Binary File   ]
                             ^^ all handled by IDE ^^
- C++ source files are 2 components with same name but different extensions:
    - header file (.h) containing definitions and function definitions (sometimes macros) but NOT executable code
    - implementation file (.cpp) contain the implementation of all functions declared in header file (i.e. executable code)
- the compiler must read the header file prior to the implementation file
- your external code (the one that uses classes) should only include header files (not implementation files)
- all implementatino files MUST be compiled: must be inluded in the list of source files in the command line, your make file, or the IDE
*/

#include <iostream>
#include <string>
#include "cow.h"

int main(){
    cow my_cow("Hildy", 7, cow_purpose::pet);
    std::cout << my_cow.get_name() << " is a type-" << (int) my_cow.get_purpose() << " cow." << std::endl;
    std::cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
