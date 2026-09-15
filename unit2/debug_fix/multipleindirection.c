#include <stdio.h>

void change(int **p)
{
    static int x = 50;

    *p = &x;
}

int main()
{
    int a = 10;

    int *p = &a;

    change(&p);

    printf("%d\n", *p);

    return 0;
}