#include <iostream>
using namespace std;

void printNumbers(int n)
{
    // Base condition
    // Stop when n becomes greater than 5
    if (n > 5)
    {
        return;
    }

    // Print current number
    cout << n << " ";

    // Function calls itself
    printNumbers(n + 1);
}

int main()
{
    // Start recursion with 1
    printNumbers(1);

    return 0;
}