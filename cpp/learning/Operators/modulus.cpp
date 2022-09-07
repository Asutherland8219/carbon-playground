#include <iostream> 

// the modulus, % , is also known as the remainder operator. It returns the value after doing 
// integer division.

int main()
{
    int x { 7 };

    int y { 2 };

    std::cout<< " The standard response is " << static_cast<double>(x)/y << "\n";
    std::cout<< " The remainder is " << x % y << "\n";
    
}