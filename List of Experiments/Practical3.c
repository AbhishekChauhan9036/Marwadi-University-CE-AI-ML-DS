// Create looping programs using for, while, and do-while
#include <stdio.h>
int main() {
    int i;

    for (i = 1; i <= 5; i++) {
        printf("%d ", i);
    }

    i = 1;
    while (i <= 5) {
        printf("%d ", i);
        i++;
    }

    i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 5);

    return 0;
}
