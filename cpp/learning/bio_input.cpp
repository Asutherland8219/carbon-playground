#include <iostream>

int main()
{
    // define the variables we are looking for
    int weight{}; // init them all at zero 
    int age{};
    int height{};

    std::cout << "Enter your weight in kg, age and height in cm seperated by a space: \n";

    std::cin >> weight >> age >> height;

    std::cout << "You have entered: \n";
    std::cout << "Weight: " << weight << "\n";
    std::cout << "Age: " << age << "\n";
    std::cout << "Height: " << height << "\n";
}