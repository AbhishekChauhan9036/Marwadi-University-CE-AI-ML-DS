#include<stdio.h>
int main(){
    FILE *fp;
    char name[50];
    int age;
    fp = fopen("intro.txt", "r");
    fscanf(fp, "%s %d", name, &age);
    printf("%s %d\n", name, age);
    fclose(fp);
    return 0;
}