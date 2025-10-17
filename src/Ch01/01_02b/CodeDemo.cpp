// Learning C++ 
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

#include <iostream> //how to include libraries
//iostream is part of standard library for printing text
//and accepting text from keyboard
//do not end with semicolon (pre-processor directives)

//main entry point of program- function that is executed by default
//main function
// note that in C++ the main function is REQUIRED to return an int
int main() {//parameter list in parenthesis, function encapsulated in curly bracket
    std::cout << "High There!" << std::endl;//std= object from standard library, ::= scope resolution operator, cout = character output (output window)
    std::cout << std::endl << std::endl;
    return(0);// 0 refers to an error code of 0 or just no error
}