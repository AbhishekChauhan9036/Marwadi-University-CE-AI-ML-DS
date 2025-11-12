#include<stdio.h>
int main(){
    FILE *fp;
    char str[] = {"File operations start from here:\n"};
    fp = fopen("intro.txt","w");
    for(int i = 0;str[i]!='\n';i++){
        fputc(str[i],fp);
    }
    return 0;
}