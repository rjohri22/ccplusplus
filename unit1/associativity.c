#include <stdio.h>

int main()
{
    int result;

    // Multiplication has higher precedence than addition
    result = 10 + 5 * 2;

    printf("Result 1 = %d\n", result);

    // Parentheses force addition to happen first
    result = (10 + 5) * 2;

    printf("Result 2 = %d\n", result);

    // * and / have the same precedence.
    // They are evaluated from left to right.
    result = 20 / 5 * 2;

    printf("Result 3 = %d\n", result);

    return 0;
}