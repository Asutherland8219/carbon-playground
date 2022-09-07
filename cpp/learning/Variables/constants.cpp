# include <iostream>

// The easiest and fastest way to get a const is to simply add the const to the start of initializing the variable 

const double gravity { 9.8 }; // preferred use 
int const sidesInSquare { 4 }; // works... but less than ideal 

// Though self-explanatory if a value is a const it cannot be changed 
// You can however, instance const variables from other non const variables 

int main()
{
    std::cout << "Enter your age: ";
    int age{};
    std::cin >> age;

    const int constAge { age }; // Here we are initializing a const with a non const value 

}



