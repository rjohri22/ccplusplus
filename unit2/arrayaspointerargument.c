#include <stdio.h>

// void display(int arr[], int n)
// {
//     int i;

//     for (i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
// }


void display(int *arr, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
        //  printf("%d ", *(arr+i));
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};

    display(arr, 5);

    return 0;
}