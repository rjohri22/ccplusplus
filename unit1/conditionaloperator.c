#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;

    // If a is greater than b, select a.
    // Otherwise, select b.
    int greater = (a > b) ? a : b;

    printf("Greater number = %d\n", greater);

    return 0;
}