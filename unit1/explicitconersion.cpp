#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = 2;

    // Convert a from int to float before division.
    float result = (float)a / b;

    // Display the result with 2 decimal places.
    cout << "Result = " << fixed << setprecision(2) << result << endl;

    return 0;
}