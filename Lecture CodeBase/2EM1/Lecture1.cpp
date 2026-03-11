#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int age;
    int rollnum;
    string branchname;
    Student(string n, int a, int roll, string branch){
        name = n;
        age = a;
        rollnum = roll;
        branchname = branch;
    }
    void printDetails(){
        cout<<"Student Name: "<<name<<endl;
        cout<<"Student Age: "<<age<<endl;
        cout<<"Student RollNumber: "<<rollnum<<endl;
        cout<<"Student Branchname: "<<branchname<<endl;
    }
};
int main(){
    Student s1("Dinesh",18, 83778, "CSE-AI");
    s1.printDetails();
}