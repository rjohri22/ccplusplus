#include <stdio.h>

int main()
{
    int a = 5;
    int b = 2;

    // Convert a from int to float before division.
    float result = (float)a / b;

    printf("Result = %.2f\n", result);

    return 0;
}