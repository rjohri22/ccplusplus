#include <stdio.h>

int main()
{
    int x = 10;

    int *p = &x;
    int **q = &p;

    printf("x = %d\n", x);

    // Access x through p
    printf("*p = %d\n", *p);

    // Access x through q
    printf("**q = %d", **q);

    return 0;
}