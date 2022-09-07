#include <iostream>

// Runtime const are not known until right at runtime  

int getNumber()
{
    std::cout << "Enter a number; ";
    int y{};
    std::cin >> y;
    return y;

}

int main()
{
    const int x { 3 }; // x is a compile-time const
    const int y { 4 }; // y is a compile time const 

    const int z{ getNumber() }; // z is a runtime constant 
    
    std::cout << x + z << '\n'; // x + y is a runtime expression

    return 0;
}


