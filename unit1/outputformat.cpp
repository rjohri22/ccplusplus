// Include the iostream header for input and output
#include <iostream>

// Include the iomanip header for output formatting
#include <iomanip>

// Use the standard namespace
using namespace std;

// Program execution starts from main()
int main() {

    // Declare student details
    string name = "Ravi";
    int age = 19;
    double marks = 87.4567;

    // Display a heading and move to the next line
    cout << "Student Details" << endl;

    // Print a separator line and move to the next line
    cout << "--------------" << endl;

    // Display labels and values using newline characters
    cout << "Name: " << name << "\n";
    cout << "Age: " << age << "\n";

    // Display marks with exactly two digits after the decimal point
    cout << fixed << setprecision(2);
    cout << "Marks: " << marks << endl;

    // Print a blank line before the table
    cout << "\n";

    // Display a table heading using field width
    cout << left << setw(15) << "Subject";
    cout << right << setw(10) << "Marks" << endl;

    // Print a separator line
    cout << "------------------------" << endl;

    // Display subject names and marks in aligned columns
    cout << left << setw(15) << "Mathematics";
    cout << right << setw(10) << 90 << endl;

    // Display another subject row
    cout << left << setw(15) << "Physics";
    cout << right << setw(10) << 85 << endl;

    // Return 0 to indicate successful program execution
    return 0;
}