#include <stdio.h>

int main()
{
    char names[3][20] =
    {
        "Rohit",
        "Amit",
        "Neha"
    };

    printf("%s\n", names[0]);
    printf("%s\n", names[1]);
    printf("%s\n", names[2]);

    return 0;
}