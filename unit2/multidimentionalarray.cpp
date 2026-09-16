#include <iostream>
using namespace std;

int main()
{
    // Declare and initialize a 2D array with 2 rows and 3 columns.
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
            // Print the current matrix element.
            cout << matrix[i][j] << " ";
        }

        // Move to the next line after each row.
        cout << endl;
    }

    return 0;
}