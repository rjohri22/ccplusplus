#include <stdio.h>

int main()
{
    int matrix[2][3] =
    {
        {10, 20, 30},
        {40, 50, 60}
    };

    // Outer loop accesses rows.
    for (int i = 0; i < 2; i++)
    {
        // Inner loop accesses columns.
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }

        // Move to the next line after each row.
        printf("\n");
    }

    return 0;
}