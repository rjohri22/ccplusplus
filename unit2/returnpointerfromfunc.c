#include <stdio.h>

int *getNumber()
{
    static int x = 50;

    // Return address of static variable
    return &x;
}

int main()
{
    int *ptr;

    // Receive returned address
    ptr = getNumber();

    printf("Value = %d", *ptr);

    return 0;
}