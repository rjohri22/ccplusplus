#include <stdio.h>

void change(int x)
{
    // Changing the local copy
    x = 100;

    printf("Inside function: %d\n", x);
}

int main()
{
    int num = 10;

    printf("Before function: %d\n", num);

    // Value of num is copied into x
    change(num);

    printf("After function: %d\n", num);

    return 0;
}