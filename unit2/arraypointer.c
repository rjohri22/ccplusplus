#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int i;

    // Access array using pointer notation
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *(arr + i));
    }

    return 0;
}