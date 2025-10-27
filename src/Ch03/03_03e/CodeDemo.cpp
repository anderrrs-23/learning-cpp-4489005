// Learning C++ 
// Exercise 03_03
// Using Classes, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class cow_purpose {dairy, meat, hide, pet};

class cow{
public:
    cow(std::string name_i, int age_i, cow_purpose purpose_i){
        name = name_i;
        age = age_i;
        purpose = purpose_i;
    }
    std::string get_name() const{
        return name;
    }
    int get_age() const{
        return age;
    }
    cow_purpose get_purpose() const{
        return purpose;
    }
    // creating a public setter function to return void type (will not return anything)
    // now you can use this function to modify the age of the cow class
    void set_age(int new_age){
        age = new_age;
    }
    // setter functions for name and purpose
    void set_name(std::string new_name){
        name = new_name;
    }
    void set_purpose(cow_purpose new_purpose){
        purpose = new_purpose;
    }
private:
    std::string name;
    int age;
    cow_purpose purpose;
};

int main(){
    cow my_cow("Hildy", 7, cow_purpose::pet); //calling constructor function in class with parameter declaration, assigning "cow" name "Hildy", age 7, and purpose as pet
    std::cout << my_cow.get_name() << " is a type-" << (int) my_cow.get_purpose() << " cow." << std::endl;
    // before you used .<member> for structure, now you use .<getter function name> for class
    // use .<getter function name>() with empty list of arguments for getter function
    std::cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << std::endl;
    
    std::cout << std::endl << std::endl;
    // my addition to the code
    // using the setter function to modify age, name, and purpose
    std::cout << "New Cow " << std::endl;
    my_cow.set_name("Heffa");
    my_cow.set_age(int(2));
    my_cow.set_purpose(cow_purpose::dairy);
    std::cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << std::endl;
    std::cout << my_cow.get_name() << " is type-" << (int) my_cow.get_purpose() << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
