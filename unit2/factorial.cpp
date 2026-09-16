#include <iostream>
using namespace std;

// Recursive function to calculate factorial
int factorial(int n)
{
    // Base case
    // Factorial of 0 is 1
    if (n == 0)
    {
        return 1;
    }

    // Recursive case
    return n * factorial(n - 1);
}

int main()
{
    int number = 5;
    int result;

    // Calling factorial function
    result = factorial(number);

    cout << "Factorial = " << result;

    return 0;
}