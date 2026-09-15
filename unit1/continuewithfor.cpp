#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        // If i is 3, skip this iteration.
        if (i == 3)
        {
            continue;
        }

        printf("%d\n", i);
    }

    return 0;
}