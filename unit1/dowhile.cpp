#include <stdio.h>

int main()
{
    int i = 1;

    do
    {
        // Print the current value.
        printf("%d\n", i);

        // Increase i after printing.
        i++;
    }
    while (i <= 5);

    return 0;
}