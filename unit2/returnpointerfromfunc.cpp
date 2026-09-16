#include <iostream>
using namespace std;

// Function returns a pointer to an integer.
int *getNumber()
{
    static int x = 50;

    // Return the address of the static variable.
    return &x;
}

int main()
{
    int *ptr;

    // Receive the returned address.
    ptr = getNumber();

    // Dereference the pointer to access the value.
    cout << "Value = " << *ptr;

    return 0;
}