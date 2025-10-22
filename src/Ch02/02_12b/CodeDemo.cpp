// Learning C++ 
// Exercise 02_12
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

enum cow_purpose {dairy, meat, hide, pet}; // code for 02_12e uses 'enum class' which is using the C++ enum class

int main(){
    int a;

    a = meat;

    std::cout << "a = " << a << std::endl; // will print 1 which is the index of the enum class for 'meat'

    std::cout << std::endl << std::endl;
    return (0);
}
