#include<stdio.h>
int main(){
    int a = 20,b = 10;
    if(a>b){
        goto print;
    }else{
        printf("b is greater than a");
    }
    print: 
    printf("a is greater than b");
    
    return 0;
}