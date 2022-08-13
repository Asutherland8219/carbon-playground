#include <iostream>

const char* RecommendMeAFood(char firstLetter);

int main()
{
    std::cout << "Today I'll eat" << RecommendMeAFood('c');

    system("pause>0");
}

const char* RecommendMeAFood(char firstLetter) {
    if (firstLetter == 'a' || firstLetter == 'A')
        return "apple";
    else if (firstLetter == 'b' || firstLetter == 'B')
        return "banana";
    else if (firstLetter == 'c' || firstLetter == 'C')
        return "chocolate cake";
    else return "apple";
       
}