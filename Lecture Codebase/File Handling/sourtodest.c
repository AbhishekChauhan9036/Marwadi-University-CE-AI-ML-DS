#include<stdio.h>
int main(){
    FILE *src, *dest;
    char ch;
    src = fopen("source.txt","r");
    dest = fopen("destination.txt","w");
    while((ch = fgetc(src))!=EOF){
        fputc(ch,dest);
    }
    fclose(src);
    fclose(dest);
    return 0;
}