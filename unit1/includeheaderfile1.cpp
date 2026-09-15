// Include the input/output header file
#include <iostream>

// Include the file stream header file
#include <fstream>

// Use the standard namespace
using namespace std;

// Program execution starts from main()
int main()
{
    // Create an output file stream object
    ofstream outFile("student.txt");

    // Write student information into the file
    outFile << "Name: Rohit" << endl;
    outFile << "Course: B.Tech" << endl;

    // Close the output file
    outFile.close();

    // Create an input file stream object
    ifstream inFile("student.txt");

    // Declare a variable to store each line
    string line;

    // Read the file line by line
    while (getline(inFile, line))
    {
        // Display each line on the screen
        cout << line << endl;
    }

    // Close the input file
    inFile.close();

    // Return 0 to indicate successful execution
    return 0;
}