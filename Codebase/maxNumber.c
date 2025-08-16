#include<stdio.h>
int main(){
    int a = 100, b = 23, c = 6;
    if(a>b && a>c){
        printf("max number is: %d",a);
    }else if(b>a && b>c){
        printf("max number is: %d",b);
    }else{
        printf("max number is: %d",c);
    }
    return 0;
}
