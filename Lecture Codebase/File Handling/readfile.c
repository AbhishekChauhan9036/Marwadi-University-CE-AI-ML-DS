#include<stdio.h>
int main(){
    FILE *fp;
    char name[50];
    int age;
    fp = fopen("x1.txt","r");
    fscanf(fp, "%s %d",name, &age);
    printf("Name: %s | Age: %d",name,age);
    fclose(fp);
    return 0;
}