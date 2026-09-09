#include <stdio.h>

int *findLargest(int *arr, int n)
{
    int *largest = ____;

    for (int i = 1; i < n; i++)
    {
        if (____ > *largest)
        {
            largest = ____;
        }
    }

    return ____;
}

int main()
{
    int arr[6] = {25, 70, 35, 90, 40, 60};

    int *p = findLargest(____, ____);

    printf("Largest = %d\n", ____);

    printf("Index = %td\n", ____);

    return 0;
}