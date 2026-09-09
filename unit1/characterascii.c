#include <stdio.h>

int main()
{
    char ch = 'A';

    // Print the character.
    printf("Character = %c\n", ch);

    // Print the ASCII/integer value of the character.
    printf("ASCII value = %d\n", ch);

    // Add 1 to the character value.
    // On an ASCII-based system, this gives B.
    printf("Next character = %c\n", ch + 1);

    return 0;
}