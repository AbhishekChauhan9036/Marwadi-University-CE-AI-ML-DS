#include<stdio.h>
#include<string.h>

union Student{
    char Name[10];
    char Address[50];
    int id;
    long long int mob;
    char streamName[50];
};

int main(){
    union Student s1;
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

    printf("%d",sizeof(s1));

    return 0;
}