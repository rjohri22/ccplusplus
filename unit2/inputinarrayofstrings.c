#include <stdio.h>

int main()
{
    char names[3][20];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("Enter name %d: ", i + 1);
        scanf("%19s", names[i]);
    }

    printf("\nNames are:\n");

    for (i = 0; i < 3; i++)
    {
        printf("%s\n", names[i]);
    }

    return 0;
}
