#include <iostream>
using namespace std;

// Function has three parameters
int addThree(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    int result;

    // Passing three arguments
    result = addThree(10, 20, 30);

    cout << "Sum = " << result;

    return 0;
}