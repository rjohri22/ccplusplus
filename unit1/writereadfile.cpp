#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Create an ofstream object to write into the file.
    ofstream outFile("student.txt");

    // Check whether the file was opened successfully.
    if (!outFile) {
        cout << "Error opening file for writing.";
        return 1;
    }

    // Write student information into the file.
    outFile << "Rahul" << endl;
    outFile << 101 << endl;
    outFile << 85.5 << endl;

    // Close the output file after writing.
    outFile.close();

    // Create an ifstream object to read from the file.
    ifstream inFile("student.txt");

    // Check whether the file was opened successfully.
    if (!inFile) {
        cout << "Error opening file for reading.";
        return 1;
    }

    // Declare variables to store the data read from the file.
    string name;
    int rollNo;
    double marks;

    // Read the name, roll number, and marks from the file.
    inFile >> name >> rollNo >> marks;

    // Display the data on the screen.
    cout << "Name: " << name << endl;
    cout << "Roll No: " << rollNo << endl;
    cout << "Marks: " << marks << endl;

    // Close the input file after reading.
    inFile.close();

    // Indicate that the program completed successfully.
    return 0;
}