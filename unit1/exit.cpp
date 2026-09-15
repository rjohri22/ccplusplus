#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 15;

    // If age is less than 18, terminate the entire program.
    if (age < 18)
    {
        printf("Not eligible.\n");

        exit(0);
    }

    // This statement will not execute when exit() is called.
    printf("Eligible.\n");

    return 0;
}