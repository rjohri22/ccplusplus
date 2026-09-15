#include <stdio.h>

void display(int *p, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", *p);
}

int main()
{
    int arr[] = {10, 20, 30, 40};

    display(arr, 4);

    return 0;
}