#include <stdio.h>

int main()
{
    int age;

    // Ask the user to enter an age.
    printf("Enter your age: ");

    // Read the integer entered by the user.
    // &age gives scanf() the address of the variable.
    scanf("%d", &age);

    // Display the entered value.
    printf("Your age is %d\n", age);

    return 0;
}