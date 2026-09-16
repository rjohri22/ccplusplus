#include <iostream>
using namespace std;

// Function receives an integer by value
void change(int x)
{
    // Changing the local copy
    x = 100;

    cout << "Inside function: " << x << endl;
}

int main()
{
    int num = 10;

    cout << "Before function: " << num << endl;

    // Value of num is copied into x
    change(num);

    cout << "After function: " << num << endl;

    return 0;
}