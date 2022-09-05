#include <iostream>

int main()
{
    int x{ 7 };
    int y{ 4 };
    std::cout << "int/int = " << x/y <<"\n";
    std::cout << "float (double) / int = " << static_cast<double>(x)/ y << "\n";
    std::cout << "int / float(double) = " << x / static_cast<double>(y) << "\n";

    return 0;

     // dividing by zero will cause the program to crash :O 
}



