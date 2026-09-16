#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 10;
    int y = 20;

    printf("Before swap: x = %d, y = %d\n", x, y);

    // Pass addresses
    swap(&x, &y);

    printf("After swap: x = %d, y = %d", x, y);

    return 0;
}