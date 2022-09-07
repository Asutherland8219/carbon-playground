// The comma operator evaluates two expressions and returns the right most expression 

#include <iostream>

int main()
{
    int x{1};
    int y{2};

    std::cout << (++x, ++y) << '\n'; //increment x and y, and returns the right most value, y

    // comma has the absolute lowest precedence in operations, and is lower than assignment
    // avoid using comma unless inside of for loops or for seperator functions 
}