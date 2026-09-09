#include <stdio.h>

void change(int *x)
{
    // Change the original variable
    *x = 100;
}

int main()
{
    int a = 10;

    printf("Before = %d\n", a);

    // Pass address of a
    change(&a);

    printf("After = %d", a);

    return 0;
}