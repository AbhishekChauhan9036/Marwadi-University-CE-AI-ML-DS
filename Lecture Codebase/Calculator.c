#include<stdio.h>
int main(){
    int a,b;
    char ch;
    scanf("%d %c %d",&a,&ch,&b);
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
        printf("Please enter a valid Expression");
        break;
    }
    return 0;
}
