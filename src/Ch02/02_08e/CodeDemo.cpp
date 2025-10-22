// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

/*
General array notes:
1. Collections of data- accessable through an index
2. Homogeneous- they are all of the same data time 
3. Fixed in size- no resizing
4. Elements are continuous in memory (i.e. the whole array is a sequential block of memory addresses
*/
#include <iostream>
/*about constants:
MACROS have no typing or syntax standards for constants, so be weary of them
const qualifier is a variable declaration, so it does have typing and syntax regulation
      - it means that the variable cannot change
*/ 
// #define AGE_LENGTH 4

int main(){
    const size_t AGE_LENGTH = 4;

    int age[AGE_LENGTH];
    // technically the values in the array below are doubles, but the float in front makes the compiler treat them like floats
    // they need an f after each constant to be a float
    float temperature[] = {31.5, 32.7, 38.9};
    //arrays are indexed by 0!
    age[0] = 25;
    age[1] = 20;
    age[2] = 19;
    age[3] = 19;

    std::cout << "The Age array has " << AGE_LENGTH << " elements." << std::endl;
    std::cout << "Age[0] = " << age[0] << std::endl;
    std::cout << "Age[1] = " << age[1] << std::endl;
    std::cout << "Age[2] = " << age[2] << std::endl;
    std::cout << "Age[3] = " << age[3] << std::endl;
    std::cout << std::endl;
    std::cout << "Temp[0] = " << temperature[0] << std::endl;
    std::cout << "Temp[1] = " << temperature[1] << std::endl;
    std::cout << "Temp[2] = " << temperature[2] << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
