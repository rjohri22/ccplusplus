#include <stdio.h>

// This function returns an integer value.
int add(int a, int b)
{
    // Return the sum to the calling function.
    return a + b;
}

int main()
{
    int result;

    // Call add() and receive its returned value.
    result = add(10, 20);

    printf("Result = %d\n", result);

    return 0;
}