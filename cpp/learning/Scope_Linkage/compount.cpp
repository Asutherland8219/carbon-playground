#include <iostream>

int main()
{ // outer block
    std::cout << "Enter an integer: ";
    int value {};
    std::cin >> value;

    if (value >= 0)
    { // nested block 
        std::cout << value << "is a positive integer (or zero) \n";
        std::cout << "Double this number is " << value * 2 << '\n';
    }
    else
    { // 2nd nested block
        std::cout << value << " is a negative integer \n";
        std::cout << "The positive of this number is " << abs(value) << '\n';
    }

    return 0;

}