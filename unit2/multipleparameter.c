#include <stdio.h>

// Function has three parameters
int addThree(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    int result;

    // Passing three arguments
    result = addThree(10, 20, 30);

    printf("Sum = %d", result);

    return 0;
}