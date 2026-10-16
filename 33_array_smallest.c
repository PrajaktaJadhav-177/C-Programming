
#include <stdio.h>

int main() {
    int a[5], i, smallest;

    printf("Enter 5 numbers:\n");

    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    smallest = a[0];

    for (i = 1; i < 5; i++) {
        if (a[i] < smallest) {
            smallest = a[i];
        }
    }

    printf("Smallest = %d\n", smallest);

    return 0;
}
