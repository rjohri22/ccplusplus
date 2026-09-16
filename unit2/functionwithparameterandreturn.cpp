#include <iostream>
using namespace std;

// Function receives two integers
// and returns their sum.
int add(int a, int b)
{
    // Declare a variable to store the sum.
    int sum;

    // Add the two numbers.
    sum = a + b;

    // Return the sum to the calling function.
    return sum;
}

int main()
{
    // Declare a variable to store the result.
    int result;

    // Passing 10 and 20 to the function.
    result = add(10, 20);

    // Display the sum.
    cout << "Sum = " << result;

    // Indicate successful program execution.
    return 0;
}