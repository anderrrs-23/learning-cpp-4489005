// header file
/*
below on line 9 is the pragma directive to only read the file one time
- this prevents the compiler from erroring by saying it already read the heaader file when it 
  redundantly reads it again for each .cpp file
- the standard is not "pragma once"- not all compilers can read that
- if the compiler does not support pragma once, use an include guard (lines 13 - 35)
*/
#pragma once

// you can use an "include guard" below using ifndef and a macro
// this below means "if the COW_H macro is not defined then include the following code"
#ifndef COW_H
// start "include guard"
#define COW_H
// below are the definitions from the main source file (codeDemo.cpp for ch03_5e)
// note it is just the declarations and NOT the implementations!!!
#include <string>

enum class cow_purpose {dairy, meat, hide, pet};

class cow{
public:
    cow(std::string name_i, int age_i, cow_purpose purpose_i);
    std::string get_name() const;
    int get_age() const;
    cow_purpose get_purpose() const;
    void set_age(int new_age);
private:
    std::string name;
    int age;
    cow_purpose purpose;
};
// below is end statement for "include guard" (usually add macro name as comment, so "COW_H")
#endif // COW_H
