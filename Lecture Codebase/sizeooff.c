#include <stdio.h>
int main()
{
    int a = 20, b = 15, c = 7;
    if (a > b && a > c){
        printf("a: %d is greatest number", a);
    }
    else if (b > a && b > c){
        printf("b: %d is greatest number", b);
    }
    else{
        printf("c: %d is greatest number", c);
    }
    return 0;
}