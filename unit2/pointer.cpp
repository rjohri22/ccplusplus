#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int *ptr;

    // Store address of x in ptr.
    ptr = &x;

    // Print the value of x.
    cout << "Value of x = " << x << endl;

    // Print the address of x.
    cout << "Address of x = " << &x << endl;

    // Print the address stored in ptr.
    cout << "Value stored in ptr = " << ptr << endl;

    // Dereference ptr to access the value of x.
    cout << "Value using ptr = " << *ptr << endl;

    return 0;
}