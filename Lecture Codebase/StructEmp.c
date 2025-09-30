#include<stdio.h>
#include<string.h>
struct Student{
    char name[50];      // 50 Bytes
    char address[50];   // 50 Bytes
    int id;             // 4 Bytes
    int roll_num;       // 4 Bytes
    int age;            // Bytes
};

int main(){
    struct Student s1, s2;
    strcpy(s1.name,"Layka");
    strcpy(s1.address,"Karnatka");
    s1.id = 67235;
    s1.roll_num = 676532;
    s1.age = 19;
    
    strcpy(s2.name,"Biradar");
    strcpy(s2.address,"Karnatka");
    s2.id = 5236;
    s2.roll_num = 9076532;
    s2.age = 18;

    printf("S1: Structure: \n");
    printf("%s\n",s1.name);
    printf("%s\n",s1.address);
    printf("%d\n",s1.id);
    printf("%d\n",s1.roll_num);
    printf("%d\n",s1.age);

    printf("\nS2: Structure: \n");
    printf("%s\n",s2.name);
    printf("%s\n",s2.address);
    printf("%d\n",s2.id);
    printf("%d\n",s2.roll_num);
    printf("%d\n",s2.age);

    printf("%d",sizeof(struct Student));
    return 0;
}