#include <stdio.h>

int main()
{
    int result = add(10, 20);

    printf("%d", result);

    return 0;
}

int add(int a, int b)
{
    return a + b;
}