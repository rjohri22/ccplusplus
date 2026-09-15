#include <stdio.h>

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        // Skip number 3.
        if (i == 3)
        {
            continue;
        }

        // Stop the loop when i becomes 7.
        if (i == 7)
        {
            break;
        }

        printf("%d ", i);
    }

    return 0;
}