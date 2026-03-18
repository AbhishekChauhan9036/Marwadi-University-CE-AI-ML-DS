/**
 * Binary Operator Overloading
 * (+)
 */
#include<bits/stdc++.h>
using namespace std;
class Employee{
    public: 
    int salary;
    void input(){
        cin>>salary;
    }
    Employee operator+(Employee e1){
        Employee temp;
        temp.salary = salary + e1.salary;
    }
    // int Plus(int e1){
    //     salary = salary + e1;
    //     return salary;
    // }

    void display(){
        cout<<"Total Salary: "<<salary<<endl;
    }
};
int main(){
    Employee e1, e2, e3;
    e1.input();
    e2.input();
    e3 = e1 + e2;   //e3 = e1.plus(e2);
    e3.display();
    return 0;
}