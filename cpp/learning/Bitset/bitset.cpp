// CPP allows for bits and bytes to be manipulated; very useful in encryption and compression

#include <bitset> 
#include <iostream>

std::bitset<8> mybitset {}; // 8 bits in size means room for 8 flags 

// 76543210 Bit position
// 00000101 Bit sequence

int main()
{
    std::bitset<8> bits{0b0000'0101}; // need 8 bits by default, start with 0000 0101
    bits.set(3); // set bit position 3 to 1 ( 000 1101 )
    bits.flip(4); // flip bit 4 ( 0001 1101 )
    bits.reset(4); // set bit 4 back to 0 (0000 1101)

    std::cout << "All the bits: " << bits << '\n';
    std::cout << "Bit 3 hasvalue: " << bits.test(3) << '\n';
    std::cout << "Bit 4 has value: " << bits.test(4) << '\n';

    }


