#include <stdio.h>

int main()
{
    int a = 5;
    int b = 3;

    // Bitwise AND
    // 0101 & 0011 = 0001
    printf("a & b = %d\n", a & b);

    // Bitwise OR
    // 0101 | 0011 = 0111
    printf("a | b = %d\n", a | b);

    // Bitwise XOR
    // 0101 ^ 0011 = 0110
    printf("a ^ b = %d\n", a ^ b);

    // Left shift
    // 0101 << 1 = 1010
    printf("a << 1 = %d\n", a << 1);

    // Right shift
    // 0101 >> 1 = 0010
    printf("a >> 1 = %d\n", a >> 1);

    return 0;
}