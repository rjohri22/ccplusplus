#include <iostream>
using namespace std;

// Function prototype.
int add(int, int);

int main()
{
    // Call the function and store the returned sum.
    int result = add(10, 20);

    // Display the result.
    cout << result;

    // Indicate successful program execution.
    return 0;
}

// Function definition.
int add(int a, int b)
{
    // Return the sum of a and b.
    return a + b;
}