#include <iostream>
using namespace std;

void findMinMax(int *arr, int n, int *min, int *max)
{
    *min = ____;
    *max = ____;
    for (int i = 1; i < n; i++)
    {
        if (____ < *min)
            *min = ____;
        
        if (____ > *max)
            *max = ____;
    }
}

int main()
{
    int arr[6] = {45, 12, 89, 23, 7, 56};
    int min, max;
    findMinMax(____, ____, ____, ____);
    cout << "Minimum = " << ____ << endl;
    cout << "Maximum = " << ____ << endl;
    return 0;
}