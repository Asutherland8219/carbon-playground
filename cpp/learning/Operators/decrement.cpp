// originally planned to have this in the same file as increments but it is breaking 

#include <iostream>

int main()
{
    int x { 10 }; // we set the base int value as 10

    int y = --x; // set  the decrement value 

    std::cout << y << '\n';

    if (y == x)
        std::cout << "Well done " << '\n'; // I see the confusion with the --x operator we assign the value to Y AND also increment x

    int b = x--; // set the decrement copy 
    
    std::cout << b << ' ' << x << '\n'; // this should be 8; 

    if (x < y)
        std:: cout << "Kachow" << '\n';

    else 
        std::cout << "You are not getting this" << '\n';

}