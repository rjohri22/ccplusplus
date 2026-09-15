#include <iostream>

// This statement allows us to use names from the std namespace
// without writing std:: before every standard library name.
using namespace std;

int main() {
    // Declare a variable to store the student's age
    int age;

    // Ask the user to enter their age
    cout << "Enter your age: ";

    // Read the age entered by the user
    cin >> age;

    // Display the entered age
    cout << "Your age is: " << age << endl;

    // Indicate that the program ended successfully
    return 0;
}