// Learning C++ 
// Exercise 03_09
// Vectors, by Eduardo Corpeño 

/* References Notes
- References are just aliases to existing variables
- Like pointers in that they point to a variable, but very different!
   ---------------------------------------------------------------------------------
   |             Pointers                  |           References                  |
   |-------------------------------------------------------------------------------|
   | - initialization optional             | - Must be initialized at declaration  |
   | - can point to dif. objects           | - cannot reference a second object    |
   |   (i.e. point to multiple variables)  |                                       |
   | - can be void and null                | - have a fixed type and object        |
   | - multiple levels of indirection      | - one level of indirection            |
   |   (i.e. pointer -> pointer -> data)   |   (only reference -> object)          |
   | - must be dereferenced to access data | - no need for dereferencing           |
   ---------------------------------------------------------------------------------
- Pointers are more powerful than references, but references may be safer than pointers
- Declare a reference: <type you want>& <variable> = <new variable name>
    - e.g. int& my_ref = my_int;
- no need to "de-reference" a variable (unlike a pointer)
Note:
    1. References are NOT pointers
    2. References are NOT objects
    3. References do NOT have an address
        - no arrays of references
        - no pointers to references
        - no references to references (they will just both be aliase to same original variable)
- Useful application of references:
    1. Passing parameters by reference (in a function)
        - allows you to modify the function parameter variable within your function
    2. Avoid copying large objects as function parameters
        - prevents unecessary copying of large data if you use a parameter by reference
    3. Avoid copying large objects in for loops
        - for for loops that iterate through a container (i.e. array or vector) may have to copy each
          element in each iteration, so reference helps avoid unecessary copy of data
*/
#include <iostream>
#include <string>

int main(){
    
    std::cout << std::endl << std::endl;
    return (0);
}
