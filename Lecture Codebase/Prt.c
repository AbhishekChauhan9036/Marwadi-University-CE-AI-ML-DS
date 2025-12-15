#include<stdio.h>
int main(){
    int n = 10;
    int *ptr = &n;
    printf("Address of n: %u\n", &n);
    return 0;
}