
#include <stdio.h>

int main() {
    int n, original, digit, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    if (n < 0) {
        printf("Not a palindrome.");
        return 0;
    }

    while (n != 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if (original == reverse) {
        printf("Palindrome number.");
    } else {
        printf("Not a palindrome.");
    }

    return 0;
}
