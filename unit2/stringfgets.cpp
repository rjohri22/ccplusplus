#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;

    // Ask the user to enter a full name
    cout << "Enter your full name: ";

    // Read the complete line, including spaces
    getline(cin, name);

    // Display the entered name
    cout << "Name = " << name;

    return 0;
}