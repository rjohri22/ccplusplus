#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare a string variable to store the full name.
    string fullName;

    // Ask the user to enter their full name.
    cout << "Enter your full name: ";

    // Read the complete line, including spaces.
    getline(cin, fullName);

    // Display the name entered by the user.
    cout << "Your full name is: " << fullName << endl;

    // Indicate that the program has completed successfully.
    return 0;
}