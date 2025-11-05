#include<stdio.h>
#include<string.h>
union Student{
    char name[10];
    int age;
    int rollNumber;
    int mob;
    char address[20];
};
int main(){
    union Student s1;
    strcpy(s1.name,"Vinod");
    s1.age = 19;
    s1.rollNumber = 8029;
    s1.mob = 62767;
    strcpy(s1.address,"Andra Pradesh");

    printf("%s\n",s1.name);
    printf("%d\n",s1.age);
    printf("%d\n",s1.rollNumber);
    printf("%d\n",s1.mob);
    printf("%s\n",s1.address);
    return 0;
}