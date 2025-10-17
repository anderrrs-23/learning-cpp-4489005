// Learning C++ 
// Exercise 02_05
// Type inference with auto, by Eduardo Corpeño 

#include <iostream>
// library that gives you the type information for a variable
// note that it may behave differently depending on your compiler- can throw errors, just need to know
// which IDE denotes which character as what (e.g. "Int64" vs "i")
#include <typeinfo>

int main(){
    // auto is used to create a variable with the type that suits the value you want to assign it to
    auto a = 8; //int (denoted "i")
    auto b = 12345678901; //larger than 32 bit (denoted "l" for "long")
    auto c = 3.14f; //float (denoted "f")
    auto d = 3.14; // double (denoted "d")
    auto e = true; //bool (defined by bool type) (denoted "b")
    auto f = 'd'; //char (single-quotes) (denoted "c")
    auto g = "C++ rocks!"; //string (double-quotes) (denoted "PKc" or "Pointer to Constant Character")

    std::cout << "The type of a is " << typeid(a).name() << std::endl;
    std::cout << "The type of b is " << typeid(b).name() << std::endl;
    std::cout << "The type of c is " << typeid(c).name() << std::endl;
    std::cout << "The type of d is " << typeid(d).name() << std::endl;
    std::cout << "The type of e is " << typeid(e).name() << std::endl;
    std::cout << "The type of f is " << typeid(f).name() << std::endl;
    std::cout << "The type of g is " << typeid(g).name() << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
