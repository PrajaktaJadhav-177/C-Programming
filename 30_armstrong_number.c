
#include <stdio.h>

int main() {
    int n, original, temp, digit;
    int count = 0, sum = 0, power, i;

    printf("Enter a non-negative number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Not an Armstrong number.");
        return 0;
    }

    original = n;
    temp = n;

    do {
        count++;
        temp = temp / 10;
    } while (temp != 0);

    temp = n;

    do {
        digit = temp % 10;
        power = 1;

        for (i = 1; i <= count; i++) {
            power = power * digit;
        }

        sum = sum + power;
        temp = temp / 10;
    } while (temp != 0);

    if (sum == original) {
        printf("Armstrong number.");
    } else {
        printf("Not an Armstrong number.");
    }

    return 0;
}
