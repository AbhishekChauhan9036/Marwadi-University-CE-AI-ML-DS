#include<stdio.h>
int main(){
    int n = 19;
    if(n<=1){
        printf("This is Not a Prime Number");
        return 0;
    }
    int flag = 0;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            flag = 1;
            break;
        }
    }
    printf("%s",flag == 1?"Not a Prime Number":"Prime Number");
    return 0;
}