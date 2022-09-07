#include <iostream>

// constant expression is an expression that can be evaluated right at complie time 

int main()
{
    const int x { 3 }; // x is a compile-time const
    const int y { 4 }; // y is a compile time const 

    std::cout << x + y << '\n'; // x + y is a compile-time expression
    return 0;

    // For speed, compile time constants can be used to to avoid having to search through memory 
    const double gravity { 9.8 }; // Now if you call gravity further in the program, the compiler wont have to search through memory
}


// Any variable that should not be modifiable after initialization and whose initializer is known at compile-time should be declared as constexpr.
// Any variable that should not be modifiable after initialization and whose initializer is not known at compile-time should be declared as const.