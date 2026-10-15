
#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    if (marks < 0 || marks > 100)
        cout << "Invalid marks";
    else if (marks >= 90)
        cout << "Grade A";
    else if (marks >= 75)
        cout << "Grade B";
    else if (marks >= 60)
        cout << "Grade C";
    else if (marks >= 40)
        cout << "Grade D";
    else
        cout << "Grade F";

    return 0;
}
