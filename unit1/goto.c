#include <stdio.h>

int main()
{
    printf("Start of program\n");

    // Jump to the label named message.
    goto message;

    // This statement is skipped.
    printf("This line is skipped\n");

message:
    printf("This is the message\n");

    return 0;
}