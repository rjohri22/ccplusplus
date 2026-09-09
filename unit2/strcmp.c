#include <stdio.h>
#include <string.h>

int main()
{
    char first[] = "apple";
    char second[] = "apple";

    if (strcmp(first, second) == 0)
    {
        printf("Strings are equal");
    }
    else
    {
        printf("Strings are different");
    }

    return 0;
}