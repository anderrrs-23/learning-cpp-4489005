/* the declarations are in the cow.h (header) file
- this file will NOT automatically be included in the list of files to be compiled, but it will be because the tasks.json file has it in there:
    - line 6 "command" is compiler command
    - line 7 is set of arguments
    - line 10 in arguments tells the list of source files to compile ALL .cpp files it finds in the same folder as the source editor where the run or debug button are
*/
#include "cow.h" // include the header file
// constructor
cow::cow(std::string name_i, int age_i, cow_purpose purpose_i){
    name = name_i;
    age = age_i;
    purpose = purpose_i;
}
std::string cow::get_name() const{
    return name;
}
int cow::get_age() const{
    return age;
}
cow_purpose cow::get_purpose() const{
    return purpose;
}
void cow::set_age(int new_age){
    age = new_age;
}
