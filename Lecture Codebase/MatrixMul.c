#include<stdio.h>
int main(){
    int arr[2][2]= {{1,2},{3,4}};
    int brr[2][2]= {{5,6},{0,7}};
    int mul[2][2]= {{0,0},{0,0}};
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                mul[i][j] = mul[i][j]+arr[i][k]*brr[k][j];
            }
        }
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%2d ",mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}