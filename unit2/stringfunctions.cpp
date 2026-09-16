#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declare and initialize a string.
    string text = "Hello";

    // Find and display the length of the string.
    cout << "Length: " << text.length() << endl;

    // Add another string at the end.
    text.append(" World");

    // Display the updated string.
    cout << "After append: " << text << endl;

    // Search for the word "World".
    cout << "Position of World: " << text.find("World") << endl;

    // Extract 5 characters starting from position 0.
    cout << "Substring: " << text.substr(0, 5) << endl;

    // Compare two strings.
    string another = "Hello World";

    if (text.compare(another) == 0)
    {
        // This block executes when both strings are equal.
        cout << "Strings are equal" << endl;
    }
    else
    {
        // This block executes when strings are different.
        cout << "Strings are different" << endl;
    }

    return 0;
}