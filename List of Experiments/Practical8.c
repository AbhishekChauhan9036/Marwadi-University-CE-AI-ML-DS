// Design programs using recursion for factorial, Fibonacci series, etc
#include <stdio.h>
int fact(int n) {
    if (n == 0) {
        return 1;
    }
    return n * fact(n - 1);
}
int fib(int n) {
    if (n <= 1) {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}
int main() {
    int n, i;
    scanf("%d", &n);

    printf("Factorial = %d\n", fact(n));

    for (i = 0; i < n; i++) {
        printf("%d ", fib(i));
    }

    return 0;
}
