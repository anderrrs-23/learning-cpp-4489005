// Learning C++ 
// Exercise 03_01
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>

// same enum class as before
enum class cow_purpose {dairy, meat, hide, pet};

// structure
struct cow{
    std::string name;
    int age;
    cow_purpose purpose;
};

int main(){
    cow my_cow; //assign a value to the cow structure
    my_cow.age = 5; // access members in structure using dot operator
    my_cow.name = "Betsy";
    my_cow.purpose = cow_purpose::dairy; // number from enum NOT a string 'dairy'
    std::cout << my_cow.name << " is a type-" << (int) my_cow.purpose << " cow." << std::endl;
    std::cout << my_cow.name << " is " << my_cow.age << " years old." << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
