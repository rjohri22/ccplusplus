#include <iostream>   // Provides cout
#include <iomanip>    // Provides setw() and setprecision()

using namespace std;

int main() {
    // Declare variables to store student information.
    string name = "Amit";
    int marks = 85;
    double percentage = 85.6789;

    // Print a heading.
    cout << "Student Details" << endl;

    // Print a separator line.
    cout << "------------------------" << endl;

    // setw(10) reserves a minimum width of 10 characters.
    cout << left << setw(12) << "Name" << ": " << name << endl;

    // Display marks using normal output.
    cout << left << setw(12) << "Marks" << ": " << marks << endl;

    // fixed displays the decimal number in fixed-point notation.
    // setprecision(2) displays exactly 2 digits after the decimal point.
    cout << fixed << setprecision(2);

    // Display the formatted percentage.
    cout << left << setw(12) << "Percentage" << ": "
         << percentage << endl;

    return 0;  // End the program successfully.
}