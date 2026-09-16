#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    // Display the total number of arguments.
    cout << "Number of arguments = " << argc << endl;

    // Display the first command-line argument.
    cout << "Argument 1 = " << argv[1] << endl;

    // Display the second command-line argument.
    cout << "Argument 2 = " << argv[2] << endl;

    return 0;
}