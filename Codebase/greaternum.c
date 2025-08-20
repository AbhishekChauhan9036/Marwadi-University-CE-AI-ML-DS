#include<stdio.h>
int main(){
    int a=10,b=5,c=12;
    if(a>b && a>c){
        printf("a is greater than b and c");
    }else if(b>a && b>c){
        printf("b is greater than a and c");
    }else{
        printf("c is greater than b and a");
    }
    return 0;
}
