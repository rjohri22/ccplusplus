#include <iostream>
using namespace std;

int main()
{
    int marks = 75;

    // Check the marks and determine the grade
    if (marks >= 90)
    {
        cout << "Grade A+" << endl;
    }
    else if (marks >= 75)
    {
        // This condition is true because marks = 75
        cout << "Grade A" << endl;
    }
    else if (marks >= 60)
    {
        cout << "Grade B" << endl;
    }
    else if (marks >= 50)
    {
        cout << "Grade C" << endl;
    }
    else
    {
        // Executed when all above conditions are false
        cout << "Fail" << endl;
    }

    return 0;
}