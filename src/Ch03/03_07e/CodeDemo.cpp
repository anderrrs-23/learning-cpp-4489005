// Learning C++ 
// Exercise 03_07
// Using Objects with Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include "cow.h"

/* most important aspect of pointers is dynamic memory management
- when you declare a variable, you are statically allocating memory for it
    - compiler knows space/memory needed for it
    - however, most real applications create variables and objects and memory during runtime = DYNAMIC MEMORY MANAGEMENT
    - YOU, as a programer, are responsible for managing memory that you allocated in runtime to avoid memory leakage
    - C++ uses pointers to dynamically allocate memory for new objects when calling the class constructor and also freeing their memory when you no longer need them
*/
int main(){
    cow *my_cow; // declaring pointer rather than object

    my_cow = new cow("Gertie", 3, cow_purpose::hide); // "new" operator creates a dynamically allocated instance of the cow class
    // right-bound arror is short-hand "member of operator" (instead of (*my_cow).get_name())
    // outline: pointer->member
    std::cout << my_cow->get_name() << " is a type-" << (int) my_cow->get_purpose() << " cow." << std::endl;
    std::cout << my_cow->get_name() << " is " << my_cow->get_age() << " years old." << std::endl;
    
    delete my_cow; // deleting after using to clear up memory (opposite of "new" operator)
    // the delete operator calls the destructor
    
    std::cout << std::endl << std::endl;
    return (0);
}
