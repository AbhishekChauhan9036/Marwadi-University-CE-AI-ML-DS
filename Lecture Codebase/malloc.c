#include<stdio.h>
#include<stdlib.h>
int main(){
    int *arr;
    int n = 5;
    arr = (int*)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        arr[i] = i + 1;
    }

    arr = (int *)realloc(arr, n*2 * sizeof(int));
    for(int i = n; i < n * 2; i++){
        arr[i] = i + 1;
    }

    for(int i = 0; i < n * 2; i++){
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}