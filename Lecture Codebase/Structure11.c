#include<stdio.h>
#include<string.h>
struct Student{
    char name[10];
    int age;
    int rollNumber;
    int mob;
    char address[20];
};
int main(){
    struct Student s1,s2;
    strcpy(s1.name,"Vinod");
    s1.age = 19;
    s1.rollNumber = 8029;
    s1.mob = 62767;
    strcpy(s1.address,"Andra Pradesh");


    strcpy(s2.name,"Sujith");
    s2.age = 17;
    s2.rollNumber = 8094;
    s2.mob = 82767;
    strcpy(s2.address,"Andra Pradesh");

    printf("%s\n",s1.name);
    printf("%d\n",s1.age);
    printf("%d\n",s1.rollNumber);
    printf("%d\n",s1.mob);
    printf("%s\n",s1.address);

    printf("%s\n",s2.name);
    printf("%d\n",s2.age);
    printf("%d\n",s2.rollNumber);
    printf("%d\n",s2.mob);
    printf("%s\n",s2.address);

    return 0;
}