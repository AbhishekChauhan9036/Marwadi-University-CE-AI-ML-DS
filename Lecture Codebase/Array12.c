#include<stdio.h>
int main(){
    int arr[]={12,67,45,8,90,1,3};
    int target = 8;
    for(int i=0;i<7;i++){
        if(arr[i]==target){
            printf("%d",i);
            break;
        }
    }
    return 0;
}