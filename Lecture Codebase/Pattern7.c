#include<stdio.h>
int main(){
    int k=0;
    for(int i=1;i<=7;i++){
        i<=4?k++:k--;
        for(int j=1;j<=7;j++){
            if(j>=5-k && j<=3+k){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}