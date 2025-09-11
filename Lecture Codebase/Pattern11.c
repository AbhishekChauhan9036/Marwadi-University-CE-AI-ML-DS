#include<stdio.h>
int main(){
    int k=1;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(j<=i){
                printf("%d",k);
            }else{
                printf(" ");
            }
        }
        k++;
        printf("\n");
    }
    return 0;
}