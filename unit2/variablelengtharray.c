#include <stdio.h>

int main()
{
    int n;

    printf("Enter array size: ");
    scanf("%d", &n);

    // Array size is decided at runtime.
    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        numbers[i] = (i + 1) * 10;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", numbers[i]);
    }

    return 0;
}