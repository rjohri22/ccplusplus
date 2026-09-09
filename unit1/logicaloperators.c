#include <stdio.h>

int main()
{
    int age = 25;
    int citizen = 1;

    // AND: both conditions must be true
    if (age >= 18 && citizen == 1)
    {
        printf("Eligible to vote\n");
    }

    // OR: at least one condition must be true
    if (age < 18 || citizen == 1)
    {
        printf("At least one condition is true\n");
    }

    // NOT: reverses the result of a condition
    if (!(age < 18))
    {
        printf("Person is not below 18\n");
    }

    return 0;
}