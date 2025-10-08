#include<stdio.h>

int fact(int n){
    if(n>=1){
        return n*fact(n-1);
    }else{
        return 1;
    }
}

int main(){
    int ans = fact(6);
    printf("%d",ans);
    return 0;
}