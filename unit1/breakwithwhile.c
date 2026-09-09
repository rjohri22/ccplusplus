#include <stdio.h>

int main()
{
    int i = 1;

    while (i <= 10)
    {
        // Stop when i becomes 6.
        if (i == 6)
        {
            break;
        }

        printf("%d ", i);

        i++;
    }

    return 0;
}