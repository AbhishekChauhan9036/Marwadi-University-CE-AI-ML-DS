// Implement programs using 1D arrays for data storage and manipulation
#include <stdio.h>
int main() {
    int a[5], i, sum = 0;

    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 5; i++) {
        sum += a[i];
    }

    printf("Sum = %d", sum);
    return 0;
}
