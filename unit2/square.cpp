#include <iostream>
using namespace std;

// Function accepts one parameter
int square(int n)
{
    // Calculate square and return it
    return n * n;
}

int main()
{
    int number = 5;
    int result;

    // Passing number to the function
    result = square(number);

    cout << "Square = " << result;

    return 0;
}