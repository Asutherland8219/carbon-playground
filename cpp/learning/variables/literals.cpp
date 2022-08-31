#include <iostream>

// Literals are values that are inserted directly into the code 

int main()
{
    bool myNameIsAlex { true }; // true is a boolean literal
    std::cout << 3.4; // 3.4 is a double literal
    return 5; // 5 is an integer literal

    // Sometimes you have to use suffix's (in a typecast method) to match the variable so that the compiler does not barf up errors

    float f { 4.1 }; // This will throw a warning that 4.1 is a double not a float literal 

    float f { 4.1f }; // now that the variable and the value match it will accept the initialization
    
 
}