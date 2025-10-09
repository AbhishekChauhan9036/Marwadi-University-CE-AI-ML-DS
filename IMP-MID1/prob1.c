#include<stdio.h>

//Function Declaration
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("%d   %d",*a, *b);
}

int main(){
    int x = 2;
    int y = 5;
    swap(&x, &y);//Function Call
    return 0;
}