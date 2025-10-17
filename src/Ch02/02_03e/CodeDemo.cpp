// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

#include <iostream>
// declaire two integer variables (a and b) and initialize b to 5
// global variables = same indentation as main function (managed statically by compiler- allocated in the data segment of memory. Once program ends, their memory is freed)
//generally avoid global variables for memory management
int a, b = 5; // single line comment

/* Multi
*  line
*  comment */

int main(){
    bool my_flag;//local variable, automatic variables (allocated in stack segment of memory which is temporary)
    a = 7;
    my_flag = false;
    // print out variables
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "flag = " << my_flag << std::endl;
    // update value of my_flag and print
    my_flag = true;
    std::cout << "flag = " << my_flag << std::endl;
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "b - a = " << b - a << std::endl;
    // C++ you can declare variables anywhere in code
    unsigned int positive;
    /* **note that the output is 4294967294 which is binary for -2 (2^32 - 2)**
    !!!!The output is equivalent to -2 but is interpreted differently!!!!
    */
    positive = b - a;
    std::cout << "b - a (unsigned) = " << positive << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
