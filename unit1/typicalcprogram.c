#include <stdio.h>              // Header file: provides printf() function

int a = 10;                     // Global variable: declared outside main()


// The main() function is the starting point of program execution
int main()
{
    // Local variable: declared inside the main() function
    char message[] = "Hello World";

    // printf() displays the message on the screen
    // %s is the format specifier used to print a string
    printf("%s", message);

    // return 0 indicates that the program ended successfully
    return 0;
}