#include<stdio.h>
int main(){
    int arr[7] = {32, 13 , 67, 3, 112, 89, 90};
    int brr[7];
    for(int i=0;i<7;i++){
        brr[i] = arr[i];
    }

    for(int i =0;i<7;i++){
        if(brr[i]%2!=0){
            printf("%d ",brr[i]);
        }
    }
    return 0;
}