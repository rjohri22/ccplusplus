#include <stdio.h>                  // Header file: provides printf() function

int a = 10;                         // Global variable

// User-defined function
void displayMessage()
{
    // This function displays a message
    printf("Hello Students!");
 
}

// The main() function is the starting point of program execution
int main()
{
    // Calling the user-defined function
    displayMessage();

    // return 0 indicates successful program completion
    return 0;
}