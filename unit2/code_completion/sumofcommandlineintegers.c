#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != ____)
        return 1;

    int arr[4];

    for (int i = 0; i < 4; i++)
    {
        arr[i] = atoi(____);
    }

    int *p = ____;

    int sum = ____;

    for (int i = 1; i < 4; i++)
    {
        sum = sum + ____;
    }

    printf("Sum = %d\n", ____);

    return 0;
}