// Learning C++ 
// Exercise 03_07
// Using Objects with Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include "cow.h"

// below is example for 3_07e that does NOT use object with pointers
int main(){
    cow my_cow("Hildy", 7, cow_purpose::pet); // just decalaring a variable of cow class
    // accessing cow class members below not using pointers
    std::cout << my_cow.get_name() << " is a type-" << (int) my_cow.get_purpose() << " cow." << std::endl;
    std::cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
