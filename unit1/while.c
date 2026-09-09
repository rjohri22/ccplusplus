#include <stdio.h>

int main()
{
    int i = 1;

    // Continue the loop while i is 5 or less.
    while (i <= 5)
    {
        // Print the current value.
        printf("%d\n", i);

        // Increase i so that the loop can eventually stop.
        i++;
    }

    return 0;
}