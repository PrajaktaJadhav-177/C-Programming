
#include <iostream>
using namespace std;

int main() {
    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (b != 0)
        cout << "Division = " << a / b << endl;
    else
        cout << "Cannot divide by zero." << endl;

    return 0;
}
