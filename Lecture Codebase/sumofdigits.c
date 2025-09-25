#include<stdio.h>
int main(){
    int n=123,sum=0,rem=0;
    while(n!=0){
        rem = n%10;
        sum = sum+rem;
        n = n/10;
    }
    printf("%d",sum);
    return 0;
}