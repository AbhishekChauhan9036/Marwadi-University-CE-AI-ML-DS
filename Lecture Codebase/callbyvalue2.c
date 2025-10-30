#include<stdio.h>
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    printf("a: %d      b: %d\n",a,b);
}

void SWAP(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("a: %d      b: %d",*a,*b);
}

int main(){
    int x= 10,y = 20;
    swap(x,y);      // Call By Value
    SWAP(&x, &y);   // Call By Reference
    return 0;
}