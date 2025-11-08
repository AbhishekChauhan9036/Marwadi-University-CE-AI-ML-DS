#include<stdio.h>
#include<stdlib.h>
int main(){
    int *arr;
    int n = 5;
    arr = (int *)calloc(n, sizeof(int)); 

    for(int i = 0; i < n; i++){
       printf("%d ", arr[i]);
    }
    
    free(arr);
    return 0;
}