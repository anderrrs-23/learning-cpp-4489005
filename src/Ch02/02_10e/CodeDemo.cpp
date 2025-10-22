// Learning C++ 
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

/* General type casting notes:
- one of the most valuable elements of C++ because it basically gives you full control of the data you are working with
- it is specifying how to interpret a piece of data
- useful for converting data types (e.g. int32_t -> float)
- type casting syntax: (type you want) [expression you want to convert]
*/
#include <iostream>
#include <cstdint>

int main(){
    // declaring variables
    float flt;
    int32_t sgn;
    uint32_t unsgn;
    // assigning declared variables
    flt = -7.66; // double constant implicitly converted to float
    sgn = flt; // since you cannot assign a float to an int, the type will be converted implicitly as well; 
    // if you assign a float or a double to an int, the value gets truncated (e.g. -7.66 -> -7)
    unsgn = sgn; // Trying to assign a negative number to an unsigned variable (not correct)
    // this value will be the 32-bit version of the two's complement of 7 (e.g 2^32 - 7)
    // the "complement of 7" refers to binary "two's complement" method of encoding a negative number in binary

    std::cout << " float: " << flt << std::endl;
    std::cout << " int32: " << sgn << std::endl;
    std::cout << "uint32: " << unsgn << std::endl;
    // this above would output 4294967289, however it is an unsigned number so it is interpreted as NOT binary
    std::cout << "uint32: " << (int32_t) unsgn << std::endl;
    // this above outputs as -7 (because it is encoded as binary for 2^32 - 7)
    
    std::cout << std::endl << std::endl;
    return (0);
}
