// Pointer in C Language
#include<stdio.h>
void fun(int *array){
    printf("First element: %d\n", array[0]);
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int *ptr = arr;
    fun(ptr);
    return 0;
}