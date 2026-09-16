#include <iostream>
using namespace std;

void change(int **p)
{
    static int x = 50;

    **p = x;
}

int main()
{
    int a = 10;

    int *p = &a;

    change(&p);

    cout << *p << endl;

    return 0;
}