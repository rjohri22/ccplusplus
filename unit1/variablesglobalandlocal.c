#include <stdio.h>

// Global variable.
// It is declared outside all functions.
int count = 10;

void display()
{
    // Access the global variable.
    printf("Count = %d\n", count);
}

int main()
{
    // Local variable.
    int age = 25;

    printf("Age = %d\n", age);

    // Call the function that uses the global variable.
    display();

    return 0;
