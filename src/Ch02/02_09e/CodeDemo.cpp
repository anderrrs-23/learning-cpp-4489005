// Learning C++ 
// Exercise 02_09
// Strings, by Eduardo Corpeño 

/*
General notes about strings:
1. Not natively supported by C++
2. However, C++ supports strings just as C
3. string (in C++) = array of characters (char) ending in the null character (encoded as 0)
*/
#include <iostream>
// string header including string class in C++ library
#include <string>
// c-string header (contains functions to handle character array strings)
#include <cstring>

int main(){
    const size_t LENGTH1 = 25;
    // constant strings are supported by C++ (denoted by double-quotes)
    char array_str1[LENGTH1] = "Hey guys! ";
    char array_str2[] = "What's up?";

    std::string std_str1 = "Hi everybody! ";
    std::string std_str2 = "How's the going?";

    // concatination
    /* strncat() takes 3 arguments: 1) destination string (first part to concatenate and will hold the resulting concatenated string; 2) second array to concatenate; 3) the maximum length to produce
    */
    // so array_str1 goes from "Hey guys! " to "Hey guys! What's up?"
    strncat(array_str1, array_str2, LENGTH1);
    std::cout << array_str1 << std::endl;
    // can concatinate with + sign
    // benefit of this method over strncat is that both original strings remain untouched
    std::cout << std_str1 + std_str2 << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
