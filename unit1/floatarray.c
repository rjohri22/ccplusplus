#include <stdio.h>

int main()
{
    float prices[4] = {10.5, 20.75, 15.25, 30.50};

    for (int i = 0; i < 4; i++)
    {
        // %.2f prints the value with 2 decimal places.
        printf("%.2f\n", prices[i]);
    }

    return 0;
}