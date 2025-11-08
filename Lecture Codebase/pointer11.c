#include<stdio.h>
int main(){
    int num  = 10;
    int *ptr = &num;
    printf("Address of num is: %x\n",ptr);
    printf("Value of num is: %d",*ptr);
    return 0;
}