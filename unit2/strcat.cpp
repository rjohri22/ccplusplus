#include <iostream>
#include <string>
using namespace std;

int main()
{
    string first = "Hello ";
    string second = "World";

    // Append second string to first
    first += second;

    // Display the joined string
    cout << first;

    return 0;
}