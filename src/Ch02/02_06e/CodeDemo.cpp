// Learning C++ 
// Exercise 02_06
// Preprocessor directives, by Eduardo Corpeño 

// the #include is a directive part of the preprocessor directive which occurs prior to compiling
// the words in the <> after the directive tells the compiler which file to use (the path is setup in the environment). Those in the standard library do not need an extension or specific file path
#include <iostream>
#include <string>
//<cstind> is part of C standard library so it has the c at the beginning but exists in a special version in the C++ standard lib
#include <cstdint>

//#define directive used to create macros (find and replace)- only use fixed constants (general nomenclature for macros it to use an all-caps variable name)
//e.g. the code below will replace anything called "CAPACITY" with 5000
#define CAPACITY 5000
#define DEBUG //does not to be assigned to any value if being used for a ifdef directive

int main(){
    int32_t large = CAPACITY;//signed 32 bit integer
    uint8_t small = 37; //unsigned 8bit integer
#ifdef DEBUG //ifdef is a conditional that work with defined directives
//notice that it is on the same indentation line as the 'int main' and ends with '#endif'
    std::cout << "[About to perform the addition]" << std::endl;
#endif
    large += small; // Shorthand for "large = large + small;"
    std::cout << "The large integer is " << large << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
