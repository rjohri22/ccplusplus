#include <iostream>
using namespace std;

// Function receives the array and its size.
void changeArray(int arr[], int n)
{
    int i;

    // Modify each element of the array.
    for (i = 0; i < n; i++)
    {
        arr[i] = arr[i] * 2;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int i;

    // Display the array before the function call.
    cout << "Before function call:" << endl;

    for (i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    // Pass the array to the function.
    changeArray(arr, 5);

    // Display the array after the function call.
    cout << "\n\nAfter function call:" << endl;

    for (i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}