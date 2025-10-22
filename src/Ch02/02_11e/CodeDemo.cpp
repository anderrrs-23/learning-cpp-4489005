// Learning C++ 
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    int fahrenheit = 100;
    int celsius;
    int celsius_conversion_wrong;
    
    celsius_conversion_wrong = (5 / 9) * (fahrenheit - 32);
    /* incorrect way
    If you run this expression above, you will get that celcius = 0 which is wrong (obvi)
    (5 / 9) above is interpreted as a constant expression, and it does not make it to the code that
    will be executed by the processor
    Moreover, since 5 and 9 are both int, (5 / 9) will calculate integer division, and it will only 
    output the quotient of the two which is 0 (discards the remainder i.e. "truncation towards zero").
    So, it would be (5 / 9) = 0, then 0 * (100 - 32) = 0
    */
    celsius = ((float)5 / 9.0) * (fahrenheit - 32);
    /*
    To fix the issue above, we must convert either number to a float or double.
    Note that expressions always conver their values to the largest type present!!
    5 is now explicitly cast to a float and 9 is now 9.0  (double)
    */

    std::cout << std::endl;
    std::cout << "Fahrenheit         : " << fahrenheit << std::endl;
    std::cout << "Celsius (Incorrect): " << celsius_conversion_wrong << std::endl;
    std::cout << "Celsius            : " << celsius << std::endl;

    // declaring variable anywhere in the code (not common in 80s coding)
    float weight = 10.99;
    
    std::cout << std::endl;
    std::cout << "Float          : " << weight << std::endl; // output 10.99
    std::cout << "Integer part   : " << (int) weight << std::endl; // truncated version of 10.99 so 10
    std::cout << "Fractional part: " << (int)((weight - (int)weight) * 10000) << std::endl; // outputs 9899
    // you would think this would output to 9900, but we are using floating-point numbers which are approximations with a small error. so it is unrounded to 9899 (this is not a limitation of C++ but of floats; a double might produce 9900)

    std::cout << std::endl << std::endl;
    return (0);
}
