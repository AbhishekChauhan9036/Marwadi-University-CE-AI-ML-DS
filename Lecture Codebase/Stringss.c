#include<stdio.h>
#include<string.h>
int main(){
    char fname[] = {"DONALD is very popular name"};
    char *sub;
    sub = strstr(fname,"popular");
    printf("%s",sub);
    return 0;
}