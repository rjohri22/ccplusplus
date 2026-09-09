#include <stdio.h>

// Function declaration
int add(int, int);

// Function definition
int add(int a, int b)
{
    return a + b;
}

int main()
{
    // Function call
    int result = add(10, 20);

    printf("%d", result);

    return 0;
}