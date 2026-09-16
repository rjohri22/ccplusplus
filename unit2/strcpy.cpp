#include <iostream>
#include <string>
using namespace std;

int main()
{
    string source = "Hello";
    string destination;

    // Copy source string into destination
    destination = source;

    // Display the copied string
    cout << "Copied string = " << destination;

    return 0;
}