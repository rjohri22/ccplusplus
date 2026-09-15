#include <iostream>   // Provides cin and cout
#include <fstream>    // Provides ifstream and ofstream
using namespace std;  // Allows us to use standard names directly

int main()
{
    int age;  // Declares a variable to store age

    // Take input from the keyboard
    cout << "Enter your age: ";
    cin >> age;

    // Display the entered age on the screen
    cout << "Your age is: " << age << endl;

    // Create and open a file for writing
    ofstream outFile("output.txt");

    // Check whether the output file opened successfully
    if (!outFile)
    {
        cout << "Error opening output file.";
        return 1;
    }

    // Write the age into the output file
    outFile << "Age entered: " << age << endl;

    // Close the output file
    outFile.close();

    // Open the file for reading
    ifstream inFile("output.txt");

    // Check whether the input file opened successfully
    if (!inFile)
    {
        cout << "Error opening input file.";
        return 1;
    }

    string text;  // Declares a variable to store a line of text

    // Read a line from the file
    getline(inFile, text);

    // Display the data read from the file
    cout << "Data read from file: " << text << endl;

    // Close the input file
    inFile.close();

    return 0;  // Ends the program successfully
}