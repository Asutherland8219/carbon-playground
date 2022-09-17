// The XOR operator is really cool and unique to C++
#include <bitset>
#include <iostream>

int main()
{
    int a = 5;
    int b = 4;
    int d = 9;

    // failing XOR
    int c = a ^ b;
    int e = (a + b) ^ d;

    // The XOR operator (^) which evaluates to true if one and only one
    // of the operators are true. If neither are true or both are true, it evaluates to 0

    std:: cout << "A failing XOR: " << e << "\n";
    std:: cout << "A passing XOR: " << c << "\n";

    

}