#include<stdio.h>
#include<string.h>

struct Student{
    char Name[50];
    char Address[50];
    int id;
    long long int mob;
    char streamName[50];
};

int main(){
    struct Student s1;
    strcpy(s1.Name,"Lokeswari");
    strcpy(s1.Address, "Andhra Pradesh");
    s1.id = 8924;
    s1.mob = 6326488;
    strcpy(s1.streamName, "CSE AI-ML");

    printf("Student Name: %s\n",s1.Name);
    printf("Student Address: %s\n",s1.Address);
    printf("Student ID: %d\n",s1.id);
    printf("Student Mob: %ld\n",s1.mob);
    printf("Student Stream Name: %s\n",s1.streamName);

    return 0;
}