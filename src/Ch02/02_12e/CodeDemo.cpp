// Learning C++ 
// Exercise 02_12
// Enumerations, by Eduardo Corpeño 

/* General notes on enumerations (enum):
- convenient way of defining a set of named integer constants
- declared as a list of identifiers (enumerators) which are assigned consecutive integer values starting at 0
- inherited from C (not designed for object-oriented programming like C++)
    - usually operate in the global scope (may lead to naming conflicts or namespace pollution
    - C-style enums lack type-checking, allowing implicit conversions between enums and integers which is bad
C++ Enumeration Class:
- e.g. "scoped enums" or "strongly-typed enums"
- encapsulated within a class scope
- prevents issues from C enums
*/

#include <iostream>
#include <cstdint>

// using
enum class cow_purpose {dairy, meat, hide, pet};// assigns "dairy" = 0, "meat" = 1, ...
enum class grocery_section {canned, frozen, meat, laundry, dairy, bakery};
// above, the variables "meat" and "dairy" are conlficting because they are assigned different values in the enum
// so if you ran std::cout << "a = " << a << std::endl; in main below, you would get an error as a means two things
// however, "enum class" (vs enum, see 02_12b), now the compiler will assume that the enums are not integers

int main(){
    // since meat is defined above in enum class, this will overwrite "meat" from 1 to 8
    // WARNING- this will not throw an error because the compiler does not care that meat already exists
    // second, the output will be just the value 8 and not the encoding for meat in the enum
    int meat = 8;
    cow_purpose a;

    // below throws an error which is good because 'meat' cannot be an int
    //a = cow_purpose::meat;
    // this is the correct way as a was defined above as the cow_purpose enum class
    a = cow_purpose::meat;

    std::cout << "a = " << (int) a << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
