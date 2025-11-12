#include<stdio.h>
int main(){
    FILE *fp;
    fp = fopen("intro.txt","w");
    fprintf(fp,"Learning C Language");
    return 0;
}