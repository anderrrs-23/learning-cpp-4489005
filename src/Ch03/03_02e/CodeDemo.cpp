// Learning C++ 
// Exercise 03_02
// Classes, by Eduardo Corpeño 

/*
***************************** CODE WILL NOT RUN- SEE 03_03E FOR SOLUTION **********************************
*/
#include <iostream>
#include <string>

enum class cow_purpose {dairy, meat, hide, pet};

class cow{
public:
/*
- constructor function (called when an object is created)
- implicit constructor is always implemented which simply creates object to allocate memory for the data members
- "overloading a function"- defining a function with the same name of an already defined function but with a different set of parameters
    - A classic constructor overload recives initialization values for all the data members
- constructor function is the only function that does not specify a return type
- constructor name must be the same as the name of the class (cow)
*/ 
    cow(std::string name_i, int age_i, cow_purpose purpose_i){ // "_i" for "initializer"
        name = name_i; // initializing objects (this case, assigning values to members)
        age = age_i;
        purpose = purpose_i;
    }
    // getter functions: get_name, get_age, get_purpose
    std::string get_name() const{ // returns a string, use const to ensure you do not modify object (aka "const correctness"
        return name;
    }
    int get_age() const{
        return age;
    }
    cow_purpose get_purpose() const{
        return purpose;
    }
private:
    std::string name;
    int age;
    cow_purpose purpose;
};

int main(){
    cow my_cow;
    my_cow.age = 5;
    my_cow.name = "Betsy";
    my_cow.purpose = cow_purpose::dairy;
    std::cout << my_cow.name << " is a type-" << (int) my_cow.purpose << " cow." << std::endl;
    std::cout << my_cow.name << " is " << my_cow.age << " years old." << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
