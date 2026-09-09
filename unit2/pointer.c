#include <stdio.h>

int main()
{
    int x = 10;
    int *ptr;

    // Store address of x in ptr
    ptr = &x;

    printf("Value of x = %d\n", x);
    printf("Address of x = %p\n", (void *)&x);
    printf("Value stored in ptr = %p\n", (void *)ptr);
    printf("Value using ptr = %d", *ptr);

    return 0;
}