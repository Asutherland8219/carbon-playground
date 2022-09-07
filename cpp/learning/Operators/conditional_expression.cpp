// continuation of conditional operator but instead using it as an expression
// can be used where if else cannot or would have to be broken out and require way more work

#include <iostream>

int main()
{
    constexpr bool inBigClassroom { false };
    constexpr int classSize { (inBigClassroom ? 30 : 20) };

    std::cout << "The class size is: " << classSize << " \n";
}