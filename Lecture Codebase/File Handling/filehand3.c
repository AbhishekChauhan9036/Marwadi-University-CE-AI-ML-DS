#include<stdio.h>
int main(){
    FILE *fp;
    fp = fopen("intro.txt","w+");
    fputs("this is fputs function",fp);
    return 0;
}