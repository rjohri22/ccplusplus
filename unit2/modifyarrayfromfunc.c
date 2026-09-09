#include <stdio.h>

void changeArray(int arr[], int n)
{
    int i;

    // Modify each element of the array
    for (i = 0; i < n; i++)
    {
        arr[i] = arr[i] * 2;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int i;

    printf("Before function call:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    // Pass array to the function
    changeArray(arr, 5);

    printf("\n\nAfter function call:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}