// Write string manipulation programs with basic string operations
#include <stdio.h>
#include <string.h>
int main() {
    char a[50], b[50];
    gets(a);

    strcpy(b, a);
    strrev(a);

    printf("Copy: %s\n", b);
    printf("Reverse: %s", a);

    return 0;
}
