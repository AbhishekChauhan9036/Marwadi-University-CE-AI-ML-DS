#include<stdio.h>
#include<string.h>
union Employee{
    char name[50];
    int id;
    char desg[50];
    int salary;
};

void printDetails(union Employee e){
    printf("Name: %s\n",e.name);
    printf("ID: %d\n",e.id);
    printf("Designation: %s\n",e.desg);
    printf("Salary: %d\n",e.salary);
}

int main(){
    union Employee e1;
    strcpy(e1.name ,"Amit Pandey");
    e1.id = 123;
    strcpy(e1.desg,"Assistant Professor");
    e1.salary = 10000;
    printDetails(e1);
    return 0;
}