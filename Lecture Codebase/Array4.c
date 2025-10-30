#include<stdio.h>
int main(){
    int arr[] = {8, 2, 3 , 1, 9};
    int sum = 0;
    for(int i=0;i<5;i++){
        sum = sum + arr[i];
    }
    printf("%d",sum);
    return 0;
}