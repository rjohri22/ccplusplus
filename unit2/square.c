#include <stdio.h>

// Function accepts one parameter
int square(int n)
{
    // Calculate square and return it
    return n * n;
}

int main()
{
    int number = 5;
    int result;

    // Passing number to the function
    result = square(number);

    printf("Square = %d", result);

    return 0;
}