// Learning C++ 
// Exercise 03_06
// Pointers, by Eduardo Corpeño

/* General Pointer Notes:
- pointers are a key feature in C/C++
- C++ has smart pointer (not in C)
- Pointers = special type of variable that hold memory addresses

Example: partial memory map
(address are shown in steps of four because each integer takes four bytes)
- e.g. declare a 32-bit integer (e.g. int a= 37;), compiler reserves a memory location for it (say address 104)
- to declare a pointer, syntax is [type of variable you want to point to]*[name of new pointer]; (e.g. int*ptr;)
- remember pointers are variables themselves, so the pointer is allocated at some memory location (e.g. address 120)
- note that if you assign an address to a pointer, it will point to that address (e.g. make ptr point to a: declare ptr = &a;); the & is "address of" operator (returns address of variable to right of &, so in this case, the address for variable a which is 104)
- so, the variable 'ptr' above 'points to a'

| Location |    Memory    |
|-------------------------|
|   100    |              |
|----------|--------------|
|   104    |      37      | int a=37;
|----------|--------------|
|   108    |              |
|----------|--------------|
|   112    |              |
|----------|--------------|
|   116    |              |
|----------|--------------|
|   120    |     104      | int *pr;
|----------|--------------|
|   124    |              |
|----------|--------------|
|   128    |              |
|----------|--------------|
*/

#include <iostream>
#include <string>

int main(){
    int a = 37;
    int *ptr;

    ptr = &a;

    std::cout << "           The content of a is " << a << std::endl;
    std::cout << "    ptr is pointing to address " << ptr << std::endl; //address is in hex
    std::cout << "           The address of a is " << &a << std::endl;
    std::cout << "Where ptr is pointing, we have " << *ptr << std::endl;
    std::cout << "         The address of ptr is " << &ptr << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
