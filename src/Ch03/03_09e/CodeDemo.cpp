// Learning C++ 
// Exercise 03_09
// Vectors, by Eduardo Corpeño 

/*
Use STL vectors insead of arrays
Vectors:
    - dynamic-sized containers (can add/delete elements dynamically)
    - memory is managed by C++ (unless the objects inside the vector require memory management)
    - generic container class: can be used to story any type of object (int, float, string, etc.)
    - numerous member functions for manipulating vectors that are available in the vector class
    - part of the standard template library
*/
#include <vector> // vector header
#include <iostream>
#include <string>

int main(){
    std::vector<int> primes; //declare vector of integers (specify data type in <>)
    // vectors come empty by default
    // vectors have front end and back end, and only insert elements through the backend
    // because they store elements consecutively in memory (inserting from front requires reallocation)
    primes.push_back(2); // add elements from the backend
    primes.push_back(3);
    primes.push_back(5);
    primes.push_back(7);
    primes.push_back(11);
    std::cout << "The vector has " << primes.size() << " elements." << std::endl; //.size prints size
    std::cout << "The element at index 2 is " << primes[2] << std::endl; // use square brackets like arrays to call elements from a vector
    primes[2] = 13;
    std::cout << "The element at index 2 is " << primes[2] << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
