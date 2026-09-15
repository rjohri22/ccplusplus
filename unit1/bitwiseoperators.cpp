#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = 3;

    // Bitwise AND
    // 0101 & 0011 = 0001
    cout << "a & b = " << (a & b) << endl;

    // Bitwise OR
    // 0101 | 0011 = 0111
    cout << "a | b = " << (a | b) << endl;

    // Bitwise XOR
    // 0101 ^ 0011 = 0110
    cout << "a ^ b = " << (a ^ b) << endl;

    // Left shift
    // 0101 << 1 = 1010
    cout << "a << 1 = " << (a << 1) << endl;

    // Right shift
    // 0101 >> 1 = 0010
    cout << "a >> 1 = " << (a >> 1) << endl;

    return 0;
}