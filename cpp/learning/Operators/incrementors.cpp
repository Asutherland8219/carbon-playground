// will also include decrement logic here as well 

#include <iostream>

int main()
{
    int x { 5 };
    int y = ++x; // ++x  is increment x then return x , so in this instance 6
    int z = --x; // --x decrements x then returns x
    int a = x++; // copy x, then increment, then return the copy 
    int b = x--; // copy x, then decrement then return the copy

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << z << '\n';
    std::cout << a << ' ' << x << '\n';

    // this is not working correctly; it is returning 6 as the b value when it should be 5
    // it is likely failing due too many sequential logics. I will break out. 
    std::cout << b << ' ' << x <<'\n';

    // this should also work if you just add the suffix or prefix 
    // this is called the postfix method and can get very convoluted 
    std::cout << ++x << '\n';

    return 0;
}