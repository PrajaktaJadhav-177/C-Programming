
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n > 0)
        cout << "Positive number";
    else if (n < 0)
        cout << "Negative number";
    else
        cout << "Zero";

    return 0;
}
