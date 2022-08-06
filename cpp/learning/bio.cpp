#include <iostream>

int main()
{
    int height; //my height 
    height = 181;

    int weight{91}; // my weight brace initialized
    int age{29};

    std::cout<<"Hello, my name is Alex. I am " << age;
    std::cout<<" years old." << std::endl;

    std::cout<<"I am currently " << weight;
    std::cout<< "kg standing at " << height << "cm tall" << std::endl;

    std::cout<<"The purpose of this is to practice printing statements and logic";
    std::cout<<" of the CPP compiler. " << std::endl;
}