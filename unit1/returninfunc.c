#include <stdio.h>

void checkNumber(int number)
{
    // If number is negative, leave the function immediately.
    if (number < 0)
    {
        return;
    }

    printf("Number is positive or zero.\n");
}

int main()
{
    checkNumber(-5);

    printf("Program continues here.\n");

    return 0;
}