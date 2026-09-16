#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declare and initialize an array of 3 strings.
    string names[3] = {"Amit", "Riya", "Rahul"};

    // Display the first string (index 0).
    cout << "Name 1: " << names[0] << endl;

    // Display the second string (index 1).
    cout << "Name 2: " << names[1] << endl;

    // Display the third string (index 2).
    cout << "Name 3: " << names[2] << endl;

    // Use a loop to display all strings.
    cout << "\nAll names:" << endl;

    for (int i = 0; i < 3; i++)
    {
        // Display the string at the current index.
        cout << names[i] << endl;
    }

    return 0;
}