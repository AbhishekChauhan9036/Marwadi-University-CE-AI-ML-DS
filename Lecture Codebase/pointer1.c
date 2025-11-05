// Pointer in C Language
#include<stdio.h>
int main(){
    int num = 20;
    int *ptr = &num;
    printf("%d\n",ptr);  //ff668
    printf("%d\n",*ptr); //20
    return 0;
}