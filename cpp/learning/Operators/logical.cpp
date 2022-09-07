// Logical operators; true false but conditional 

#include <iostream>

int main()
{
    int x{5};
    int y{7};

    if (!x > y) // The logical NOT operator
        std::cout << x << "is not greater than " << y << '\n'; 
    

    if ( x == 3 || x == 5) // The logical OR operator
        std::cout << x << " is odd" << '\n';

    if ( x > 3 && x < 7) // The logical AND operator
        std::cout << " The value must be 5!" << '\n';

    // We can also chain these commands

    if ( x > 0 && x < 6 || x == 5)
        std::cout << "X is most certainly 5! " << '\n';

    // We also have a circuit breaker, where if two conditions are compared, the left most
    // or the first operation, is returned

std::cout << (x>=5 || x<=4) << '\n'; // This will return a binary value, 0 for false, 1 for true







}