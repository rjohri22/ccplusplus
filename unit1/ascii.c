#include <stdio.h>

int main()
{
    char ch = 'A';

    // %c prints the character.
    printf("Character = %c\n", ch);

    // %d prints the integer value of the character.
    // On an ASCII-based system, A has value 65.
    printf("ASCII value = %d\n", ch);

    return 0;
}