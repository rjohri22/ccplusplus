#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int length;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline added by fgets()
    str[strcspn(str, "\n")] = '\0';

    // Find length of string
    length = strlen(str);

    printf("Length = %d", length);

    return 0;
}