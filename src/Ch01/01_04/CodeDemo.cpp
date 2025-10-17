// Learning C++ 
// Challenge Solution 01_04
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string str; //declaration that creates an opbject named str of the std::string class
    std::cout << "Enter your name: " << std::flush; //flush makes sure output is completely sent to terminal before waiting for user input
    std::cin >> str;
    std::cout << "Nice to meet you, " << str << "!" << std::endl; //concatinated elements

    std::cout << std::endl << std::endl;
    return (0);
}
