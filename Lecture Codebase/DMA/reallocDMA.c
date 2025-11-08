#include <stdio.h>
#include <stdlib.h>
int main() {
    int *arr;
    int n = 3;
    arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++){
        arr[i] = i + 1;
    }
    arr = (int *)realloc(arr, 5 * sizeof(int));
    arr[3] = 4;
    arr[4] = 5;
    for (int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}
