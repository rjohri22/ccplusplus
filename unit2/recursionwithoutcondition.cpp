#include <iostream>
using namespace std;

void count()
{
    // Static variable retains its value between function calls
    static int n = 0;

    n++;

    cout << "Function call: " << n << endl;

    // Function calls itself again
    count();
}

int main()
{
    count();

    return 0;
}