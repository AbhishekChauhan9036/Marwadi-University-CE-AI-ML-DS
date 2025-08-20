#include<stdio.h>
int main(){
    int a,b,c;
    a = 10;
    b = 20;
    c = 15;
    if(a>b && a>c){
        printf("%d is a Largest Number",a);
    }else if(b>a && b>c){
        printf("%d is a Largest Number",b);
    }else{
        printf("%d is a Largest Number",c);
    }
    return 0;
}
