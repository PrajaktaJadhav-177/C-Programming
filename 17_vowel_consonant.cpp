
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;
    cout << "Enter a letter: ";
    cin >> ch;

    ch = tolower(ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' ||
        ch == 'o' || ch == 'u')
        cout << "Vowel";
    else
        cout << "Consonant";

    return 0;
}
