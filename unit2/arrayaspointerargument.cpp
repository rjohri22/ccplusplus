#include <iostream>
using namespace std;

// Function receives the array address and its size.
void display(int *arr, int n)
{
    int i;

    // Loop through the array elements.
    for (i = 0; i < n; i++)
    {
        // Access the array using index notation.
        cout << arr[i] << " ";

        // Pointer notation can also be used:
        // cout << *(arr + i) << " ";
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};

    // Pass the array and its size to the function.
    display(arr, 5);

    return 0;
}