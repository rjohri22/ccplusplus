#include <stdio.h>

// Function receives two integers
// and returns their sum
int add(int a, int b)
{
    int sum;

    sum = a + b;

    return sum;
}

int main()
{
    int result;

    // Passing 10 and 20 to the function
    result = add(10, 20);

    printf("Sum = %d", result);

    return 0;
}