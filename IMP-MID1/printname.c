#include<stdio.h>
// Function Declaration
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("a: %d  |  b:%d",*a,*b);
}

int main(){
    int a = 10, b = 5;
    swap(&a,&b);// Function Call
    return 0;
}

/**
 * Nature of the Functions
 * 1. Take Something Return Something
 * 2. Take Something Return Nothing
 * 3. Take Nothing Return Something
 * 4. Take Nothing Return Nothing
 */


