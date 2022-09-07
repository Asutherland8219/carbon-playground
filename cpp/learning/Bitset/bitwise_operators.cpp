// Though similar to standard operators, C++ uses slightly modifieid operators for bit manipulation

#include <bitset>
#include <iostream>

int main()
{
    std::bitset<4> x { 0b1100 } ;

    std::cout << x << '\n';
    std::cout << (x >> 1) << '\n'; // right shift by 1, 0110
    std::cout << (x << 1) << '\n'; // left shift by 1, 1000

    // The bitwise NOT operator (~) simply flips all 0s to 1s in the bit position

    std::cout << ~x << " is the inverse of:" << x << '\n';
    
    // The bitwise OR operator applies the OR to each bit 

    std::cout << (x | std::bitset<4>{ 0b0101 }) << '\n';

}