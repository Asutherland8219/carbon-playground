#include <iostream>
#include <iomanip>

int main()
{
    std::cout << std::setprecision(16);
    std::cout << 3.3333333333333333333333333f << '\n'; // f suffix means it is a float
    std::cout << 3.3333333333333333333333333 << '\n'; // no f automatically creates a double

    // favor double over float for precision
    
    return 0;

}



