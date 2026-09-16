#include <iostream>
using namespace std;

int main()
{
    int x = 10;

    // p stores the address of x.
    int *p = &x;

    // q stores the address of pointer p.
    int **q = &p;

    // Display the value of x.
    cout << "x = " << x << endl;

    // Access x through p.
    cout << "*p = " << *p << endl;

    // Access x through q using double dereferencing.
    cout << "**q = " << **q << endl;

    return 0;
}