#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=8;j++){
            if(j>=i && j<=3+i){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}