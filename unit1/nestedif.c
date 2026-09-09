#include <stdio.h>

int main()
{
    int age = 20;
    int citizen = 1;

    // First check whether the person is 18 or older
    if (age >= 18)
    {
        // This condition is checked only if age >= 18
        if (citizen == 1)
        {
            // Both conditions are true
            printf("You are eligible to vote.\n");
        }
    }

    return 0;
}