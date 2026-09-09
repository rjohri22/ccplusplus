#include <stdio.h>

int main()
{
    int marks = 75;

    // Check the marks and determine the grade
    if (marks >= 90)
    {
        printf("Grade A+\n");
    }
    else if (marks >= 75)
    {
        // This condition is true because marks = 75
        printf("Grade A\n");
    }
    else if (marks >= 60)
    {
        printf("Grade B\n");
    }
    else if (marks >= 50)
    {
        printf("Grade C\n");
    }
    else
    {
        // Executed when all above conditions are false
        printf("Fail\n");
    }

    return 0;
}