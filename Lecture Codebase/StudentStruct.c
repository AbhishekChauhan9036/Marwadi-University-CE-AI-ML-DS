#include<stdio.h>
#include<string.h>
union Student{
    char name[50];
    int enrollnum;
    char stream[50];
    int marks;
};

void printDetails(union Student s){
    printf("Name: %s\n",s.name);
    printf("Enrollment Number: %d\n",s.enrollnum);
    printf("Stream: %s\n",s.stream);
    printf("Marks: %d\n",s.marks);
}

int main(){
   union Student s1;
    strcpy(s1.name,"Anil");
    s1.enrollnum = 45687;
    strcpy(s1.stream,"CSE-AI,ML");
    s1.marks = 14;
    printDetails(s1);
    return 0;
}