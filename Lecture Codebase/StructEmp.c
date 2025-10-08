#include<stdio.h>
#include<string.h>
struct Student{
    char name[50];      // 50 Bytes
    char address[50];   // 50 Bytes
    int id;             // 4 Bytes
    int roll_num;       // 4 Bytes
    int age;            // 4 Bytes
};

void display(struct Student s2){
    printf("S2: Structure: \n");
    printf("%s\n",s2.name);
    printf("%s\n",s2.address);
    printf("%d\n",s2.id);
    printf("%d\n",s2.roll_num);
    printf("%d\n",s2.age);
}

int main(){
    struct Student s1;
    strcpy(s1.name,"Layka");
    strcpy(s1.address,"Karnatka");
    s1.id = 67235;
    s1.roll_num = 676532;
    s1.age = 19;

    display(s1);
    return 0;
}