#include<stdio.h>
int main(){
    FILE *fp;
    char text[100];
    fp = fopen("intro.txt","a");

    printf("Enter your Introduction:");
    fgets(text,sizeof(text), stdin);
    fputs(text, fp);
    fclose(fp);
    return 0;
}