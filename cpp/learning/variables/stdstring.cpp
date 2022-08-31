#include <string>
#include <iostream>

int main()
{
    std::cout << "Enter your favorite footy team: ";
    std::string name{}; // init the variable 
    std::getline(std::cin >> std::ws, name); // fetch the variable 

    // std::ws ignores leading whitespace 

    std::cout << name << '\n';
    std::cout << name.length() << '\n';

    return 0;
}