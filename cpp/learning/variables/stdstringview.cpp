#include <iostream>
#include <string_view>

void printSV(std::string_view str) // now a std::string_view
{
    std::cout << str << '\n';
}

int main()
{
    std::string_view s{"Hello, World!"}; // in c++17 you can use string view to view the string
    // this is much faster than copying in the standard stdstring method 
    printSV(s);

    // use std::string_view over std::string for read only strings

    return 0;

}




