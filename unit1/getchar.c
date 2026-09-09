#include <stdio.h>

int main()
{
    char ch;

    // Ask the user to enter one character.
    printf("Enter a character: ");

    // getchar() reads one character from the keyboard.
    ch = getchar();

    // Display the character entered by the user.
    printf("You entered: %c\n", ch);

    char grade = 'A';

    // Display the character stored in grade.
    putchar(grade);

    // Display a new line character.
    putchar('\n');


    return 0;
}