// Learning C++ 
// Exercise 03_02
// Classes, by Eduardo Corpeño 

/*
General Classes Notes:
- basic elements of object-oriented programming
- useful for implementing models
- ctonain data and function members
- same as in Java/python languages
- very similar to structures in C++
*/
#include <iostream>
#include <string>

enum class cow_purpose {dairy, meat, hide, pet};

/*
What NOT to do:
struct cow{
    std::string name;
    int age;
    cow_purpose purpose;
};
- this gives errors because the main function below cannot access its members with the dot function as
  class members are private by default
- have to add 'public' keyword to any member of class you want available
- it is recommended to keep data as private as possible so the class cannot be modified
- you can define member functions referred to as "setters" and 'getters" to accomodate this point above:
    - "setters": functions to write into data members
    - "getters": functions to return data member values (do not modify object)
- using "setters" and "getters" ensure that the private members are only accessed with code within the class; the members are still available to the public but they are protected
*/

class cow{
    public:
    std::string name;
    int age;
    cow_purpose purpose;
};

int main(){
    cow my_cow;
    my_cow.age = 5;
    my_cow.name = "Betsy";
    my_cow.purpose = cow_purpose::dairy;
    std::cout << my_cow.name << " is a type-" << (int)my_cow.purpose << " cow." << std::endl;
    std::cout << my_cow.name << " is " << my_cow.age << " years old." << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
