# include <iostream>

int x = {};

int main()
{
    std::cout << "Enter how many sub arrays you would like : ";
    int sub_count{};
    std::cin >> sub_count;

    const int constsubcount { sub_count }; // Here we are initializing a const with a non const value 

    std::cout << "Total Cash = ";
    int cash{};
    std::cin >> cash;

    const int constcash { cash };


    std::cout << sub_count << "," << cash ;

}

