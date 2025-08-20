// Implement function-based programs for modular programming
#include <stdio.h>
int add(int x, int y) {
    return x + y;
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Sum = %d", add(a, b));
    return 0;
}
