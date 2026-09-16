#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30};

    // Store the address of the first element of arr in p.
    int *p = arr;

    // Dereference p to print the first element.
    cout << *p << endl;

    // Move the pointer to the next array element.
    p++;

    // Print the second element.
    cout << *p << endl;

    // Move the pointer to the next array element.
    p++;

    // Print the third element.
    cout << *p << endl;

    return 0;
}