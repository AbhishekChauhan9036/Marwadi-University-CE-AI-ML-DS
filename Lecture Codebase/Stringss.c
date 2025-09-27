#include<stdio.h>
#include<string.h>
int main(){
    char str[] = {"Marwadi University is best college in Gujarat"};
    char *sub;
    sub = strstr(str,"college");
    printf("%s",sub);
    return 0;
}