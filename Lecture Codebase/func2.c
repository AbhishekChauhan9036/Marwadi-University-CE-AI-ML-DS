#include<stdio.h>

int Max(int a, int b){
    printf("Hello World");
    return (a>b)?a:b;
}

int main(){
    int x = 10;
    int y = 70;
    int max = Max(x, y);// call by value
    printf("%d",max);
    return 0;
}