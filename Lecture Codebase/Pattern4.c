#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        char ch = 'A';
        for(int j=1;j<=5;j++){
            if(j<=i){
                printf("%c",ch++);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}