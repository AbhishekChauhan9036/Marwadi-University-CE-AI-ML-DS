#include <stdio.h>
int main() {
    int x = 0;
    if (++x && x++ && ++x) {
        printf("%d\n", x);
    } else {
        printf("%d\n", x);
    }
    return 0;
}
