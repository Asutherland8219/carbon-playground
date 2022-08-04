#include <iostream>

int main()
{
    int width; //initialize the variable
    width = 5; // assign value to the variable

    width = 7; // overwrite the variable 

    int width = 5; // copy initialization; init the variable and the value same line 

    int width(5); // Direct initialization; more efficient than above

    int width{7}; // Brace initialization; preferred method

    std::cout<<width;

    return 0;

}