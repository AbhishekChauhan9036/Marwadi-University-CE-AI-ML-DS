#include<stdio.h>
int main(){
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);
    if(num>0){
        printf("Postive Number");
    }else if(num<0){
        printf("Negative Number");
    }else{
        printf("Value of num is 0");
    }
    return 0;
}
