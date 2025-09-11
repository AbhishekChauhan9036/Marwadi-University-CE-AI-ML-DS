#include<stdio.h>
int main(){
    int n = 5;
    int arr[]={4,8,1,2,3};
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i= 0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}