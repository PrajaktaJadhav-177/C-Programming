
#include <iostream>
using namespace std;

int main() {
    float marks;
    cout << "Enter marks out of 100: ";
    cin >> marks;

    if (marks < 0 || marks > 100)
        cout << "Invalid marks";
    else if (marks >= 40)
        cout << "Pass";
    else
        cout << "Fail";

    return 0;
}
