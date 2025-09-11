#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        int k=1;
        for(int j=1;j<=9;j++){
            if(j>=i && j<=10-i){
                printf("%d",j<5?k++:k--);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}