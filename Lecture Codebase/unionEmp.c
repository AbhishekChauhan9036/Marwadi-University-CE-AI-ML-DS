#include<stdio.h>
#include<string.h>
union Employee{
    char Name[50];
    int id;
    double salary;
    char desg[100];
};

void display(union Employee e1){
   printf("Name of Emp: %s\n",e1.Name);
   printf("ID of Emp: %d\n",e1.id);
   printf("Salary of Emp: %lf\n",e1.salary);
   printf("Designation of Emp: %s\n",e1.desg);
};

int main(){
    union Employee e1;
    strcpy(e1.Name,"Rakesh");
    e1.id = 7388;
    e1.salary = 7283286.99;
    strcpy(e1.desg, "Software Engineer");
    display(e1);
    return 0;
}


