#include <stdio.h>

int main()
{
    // The variable name clearly describes the data.
    int student_marks = 85;

    // The variable name describes the required marks.
    int passing_marks = 40;

    if (student_marks >= passing_marks)
    {
        printf("Student has passed.\n");
    }

    return 0;
}