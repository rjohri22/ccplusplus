#include <stdio.h>

int main()
{
    int age = 20;

    // Check whether age is 18 or more
    // If true, "Eligible" is selected
    // If false, "Not Eligible" is selected
    char *result = (age >= 18) ? "Eligible" : "Not Eligible";

    printf("%s\n", result);

    return 0;
}