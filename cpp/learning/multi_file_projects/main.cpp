# include <iostream>
# include "add.h"

int add(int x, int y); // add forward declaration so we know it exists

int main()
{
    std::cout<<"Guten Tag, World"; //testing comments 
    int x {5};
    int y {2};

    std::cout << "The sum of 3 and 4 is: " << add(x, y) << '\n';

    return 0;
}

/*
{
    Multi-line comments 
    std::cout<<"Guten Tag, World"; //testing comments 
    return 0;
}
*/


