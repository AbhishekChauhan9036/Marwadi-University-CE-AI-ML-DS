#include<stdio.h>
int main(){
    int num = 10;
    int *ptr = &num;
    ptr+=1;
    printf("Address of num: %d\n", ptr);
    return 0;
}