#include <stdio.h>
int main() {
    int a = 3, b;
    b = a++ + a++ + ++a;
    printf("%d %d\n", a, b);
    return 0;
}


/*
 Post Increment a++
 Pre Increment  ++a
*/
