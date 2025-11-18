// Learning C++ 
// Exercise 03_10
// Using Objects with Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <string>
#include "cow.h"

/*
Vectors support iterators which allow you to traverse containers
- works similar to pointers (note, pointers are actually a type of iterator)
*/
int main(){
    std::vector<cow> cattle;
    
    cattle.push_back(cow("Betty", 6, cow_purpose::meat)); //using cow_purpose constructor
    cattle.push_back(cow("Libby", 4, cow_purpose::hide));
    cattle.push_back(cow("Trudy", 5, cow_purpose::pet));
    cattle.push_back(cow("Betsy", 2, cow_purpose::dairy));

    std::cout << "The first cow is " << cattle.begin()->get_name() << std::endl;
    // above, since iterators work like pointers, we can use the member of pointer
    // (aka arrow operator) to access the get name function
    // cattle.begin() means first element
    std::cout << "At index 1 we have " << cattle[1].get_name() << std::endl; // using .get_name() (the dot operator) because cattle[1] is an object and NOT an iterator
    std::cout << "Next to last is " << prev(cattle.end(), 2)->get_name() << std::endl;
    std::cout << "The last cow is " << (cattle.end() - 1)->get_name() << std::endl;
    // .end() gives you the return value, so you do cattle.end()-1
    // .end() returns an iterator to the element AFTER the last element (which is null in this case)
    // you use .end() for writing loops as it is a sentinel value marking the boundary of the vector
    // a similar way to access the last element is the following:
    std::cout << "The last cow (again) is " << prev(cattle.end(), 1)->get_name() << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
