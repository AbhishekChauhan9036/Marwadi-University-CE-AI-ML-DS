#include<stdio.h>

//Function Definition
int sum(int n){
    if(n == 1) return 1;
    return n + sum(n - 1);
}

int main(){
    int ans = sum(5); // function call
    printf("%d\n", ans);  
    return 0;
}