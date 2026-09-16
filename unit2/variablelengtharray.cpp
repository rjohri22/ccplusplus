#include <iostream>
using namespace std;

int main()
{
    // Declare a variable to store the array size.
    int n;

    // Ask the user to enter the size.
    cout << "Enter array size: ";
    cin >> n;

    // Dynamically create an integer array of size n.
    int* numbers = new int[n];

    // Store values in the dynamically allocated array.
    for (int i = 0; i < n; i++)
    {
        // Assign a value to each element.
        numbers[i] = (i + 1) * 10;
    }

    // Display the array elements.
    cout << "Array elements: ";

    // Traverse and print all elements.
    for (int i = 0; i < n; i++)
    {
        // Print the current element.
        cout << numbers[i] << " ";
    }

    // Release the dynamically allocated memory.
    delete[] numbers;

    // Indicate successful program execution.
    return 0;
}