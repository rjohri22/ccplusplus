#include <stdio.h>

int main()
{
    // Declare and initialize a C-style string
    char name[] = "Hello";

    // Display the string
    printf("Name: %s\n", name);

    // Display the length of the string
    printf("Length: %zu", sizeof(name) - 1);

    return 0;
}