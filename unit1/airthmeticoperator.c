#include <stdio.h>

int main()
{
    int a = 10;
    int b = 3;

    // + adds two numbers
    printf("Addition = %d\n", a + b);

    // - subtracts the second number from the first
    printf("Subtraction = %d\n", a - b);

    // * multiplies two numbers
    printf("Multiplication = %d\n", a * b);

    // / performs integer division because a and b are integers
    printf("Division = %d\n", a / b);

    // % gives the remainder after division
    printf("Remainder = %d\n", a % b);

    return 0;
}