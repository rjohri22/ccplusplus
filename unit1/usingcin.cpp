#include <iostream>
using namespace std;

int main() {
    // Declare variables to store student information
    string name;
    int age;

    // Ask the user to enter their name
    cout << "Enter your name: ";

    // Read the name entered by the user
    cin >> name;

    // Ask the user to enter their age
    cout << "Enter your age: ";

    // Read the age entered by the user
    cin >> age;

    // Display the entered information
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;

    // Indicate that the program ended successfully
    return 0;
}