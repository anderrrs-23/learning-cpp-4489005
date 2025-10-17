// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

//challenge hints
//prompts input (no prompt text) and prints out input (one word input)
//int main(){
//    std::string str;
//    std::cin >> user_input_name; //cin for input ONLY uses single words as input (no spaces- that is another function)
//    std::cout << str;
//
//    std::cout << std::endl << std::endl;
//    return (0);
//}

//challenge: ask for the user's name and reply
int main(){
    //prompt user for input
    std::cout << "Please tell me your name: " << std::endl;
    std::string user_input_name;
    std::cin >> user_input_name;
    //reply
    std::cout << "Hello, ";
    std::cout << user_input_name;
    std::cout << ". Nice to meet you. I am a C++ novice.";
    std::cout << std::endl << std::endl;
    return (0);
}

