#include <iostream>

int main()
{
    std::cout << "Enter an Integer: ";
    int x {};
    std::cin >> x;

    if (x > 0) // the condition to be met 
        std::cout << "The value is positive \n";
    else if (x < 0) // the condition if the first condition is not met
        std::cout << "The value is negative \n";
    else if ( x == 0) // the exception if the condition is not met 
        std::cout << "The value is zero \n";
    else 
        std::cout << "The value is not a number \n";
        
    return 0;

}