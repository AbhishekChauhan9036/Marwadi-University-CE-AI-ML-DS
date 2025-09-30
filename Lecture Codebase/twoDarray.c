#include<stdio.h>
#include<string.h>
int main(){
    char str[]={"abcba"};
    int check = 1;
    for(int i=0;i<=strlen(str)/2;i++){
        if(str[i]!=str[strlen(str)-i-1]){
            check = 0;
            break;
        }
    }

    if(check == 0){
        printf("It's Not Palindrome");
    }else{
        printf("It's Palindrome");
    }
    return 0;
}
//Palindrome