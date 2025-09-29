#include<stdio.h>
int main(){
    int n = 13;
    if(n<=1){
        printf("Not a Prime Number");
        return 0;
    }
    int check = 1;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            check = 0;
            break;
        }
    }
    printf("%s",check==0?"Not a prime Number":"Prime Number");
    return 0;
}