#include <stdio.h>

int main()
{
    int department = 1;
    int year = 2;

    // Outer switch selects the department
    switch (department)
    {
        case 1:
            printf("Computer Science Department\n");

            // Inner switch selects the year
            switch (year)
            {
                case 1:
                    printf("First Year\n");
                    break;

                case 2:
                    // year = 2, so this case is executed
                    printf("Second Year\n");
                    break;

                case 3:
                    printf("Third Year\n");
                    break;

                default:
                    printf("Invalid Year\n");
            }

            break;

        case 2:
            printf("Mechanical Department\n");
            break;

        default:
            printf("Invalid Department\n");
    }

    return 0;
}