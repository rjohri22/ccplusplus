#include <stdio.h>

int main()
{
    int day = 3;

    // The value of day is compared with each case
    switch (day)
    {
        case 1:
            printf("Monday\n");
            break;  // Exit switch

        case 2:
            printf("Tuesday\n");
            break;

        case 3:
            // day = 3, so this case is executed
            printf("Wednesday\n");
            break;

        case 4:
            printf("Thursday\n");
            break;

        default:
            // Executed when no case matches
            printf("Invalid day\n");
    }

    return 0;
}