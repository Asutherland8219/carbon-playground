// the arithmetic if, takes 3 operands and is basically c++'s only ternery operator
#include <iostream>

int main()
{

    int x { 5 };
    int y { 2 };
    int larger {};
    int larger_2 {};

    // this is a standard conditional expression 
    if (x > y)
        larger = x;
    else
        larger = y;

    std::cout << larger << '\n';


    // this is a reword conditional expression 
    // typically it would be ? expression1 : expression2;

    larger_2 = ( x > y ) ? x : y; // this works, but it is recommended to parenthesize the whole thing for easier debugging/readability

    larger_2 = (( x > y ) ? x : y);

    std::cout << larger_2 << '\n';

}
