#include <iostream>
using namespace std;

int main()
{
    int a = 10;

    cout << "Initial value = " << a << endl;

    // Same as: a = a + 5
    a += 5;
    cout << "After += 5 = " << a << endl;

    // Same as: a = a - 3
    a -= 3;
    cout << "After -= 3 = " << a << endl;

    // Same as: a = a * 2
    a *= 2;
    cout << "After *= 2 = " << a << endl;

    // Same as: a = a / 2
    a /= 2;
    cout << "After /= 2 = " << a << endl;

    return 0;
}