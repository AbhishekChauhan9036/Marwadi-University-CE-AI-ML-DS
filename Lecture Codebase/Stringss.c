#include<stdio.h>
#include<string.h>
int main(){
    char str1[]={"Veron\0"};
    int i=0,cnt=0;
    while(str1[i]!='\0'){
        cnt++;
        i++;
    }
    printf("%d",cnt);
    return 0;
}