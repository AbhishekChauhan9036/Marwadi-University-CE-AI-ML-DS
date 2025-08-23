#include<stdio.h>
int main(){
    int a=10, b=20;
    char ch = '*';
    switch(ch){
    case '+':
        printf("%d",a+b);
        break;
    case '-':
        printf("%d",a-b);
        break;
    case '*':
        printf("%d",a*b);
        break;
    case '/':
        printf("%d",a/b);
        break;
    default:
        printf("Please enter a correct operator");
        break;
    }
    return 0;
}
