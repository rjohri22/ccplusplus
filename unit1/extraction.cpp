#include <iostream>
using namespace std;

int main() {
    // Declare variables to store student information
    string name;
    int age;
    float marks;

    // Ask the user to enter name, age, and marks
    cout << "Enter name, age, and marks: ";

    // Extract input values and store them in the variables
    cin >> name >> age >> marks;

    // Display the entered information
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Marks: " << marks << endl;

    // Indicate that the program ended successfully
    return 0;
}