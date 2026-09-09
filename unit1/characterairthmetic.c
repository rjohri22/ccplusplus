#include <stdio.h>

int main()
{
    char ch = 'A';

    // Print the original character.
    printf("Original = %c\n", ch);

    // Add 1 to the character's integer value.
    // In ASCII, this gives the value for B.
    printf("After +1 = %c\n", ch + 1);

    return 0;
}