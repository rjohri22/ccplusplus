#include <stdio.h>

// Function prototype
int add(int, int);

int main()
{
    int result = add(10, 20);

    printf("%d", result);

    return 0;
}

// Function definition
int add(int a, int b)
{
    return a + b;
}