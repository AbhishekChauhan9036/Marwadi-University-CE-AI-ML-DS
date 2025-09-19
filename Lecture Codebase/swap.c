#include<stdio.h>
int main(){
    int a=10,b=8;
    printf("Before swap: a = %d , b = %d\n",a,b);
    int c = a;
    a = b;
    b = c;
    printf("After swap: a = %d , b = %d\n",a,b);
    return 0;
}