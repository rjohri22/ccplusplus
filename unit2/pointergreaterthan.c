#include <stdio.h>

int main()
{
    int a;
    int b;

    int *p = &a;
    int *q = &b;


    printf("%p\n", (void*)p);
    printf("%p\n", (void*)q);

    if(p < q)
    {
        printf("Pointer p is greater than pointer q\n");
    }
    else
    {
        printf("Pointer p is not greater than pointer q\n");
    }

    return 0;
}