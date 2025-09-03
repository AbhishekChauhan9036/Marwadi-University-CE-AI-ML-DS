#include<stdio.h>
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    for(int i=0;i<=4;i++){
        printf("%d ",arr[4-i]);
    }
    printf("\n");
    for(int i=4;i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}