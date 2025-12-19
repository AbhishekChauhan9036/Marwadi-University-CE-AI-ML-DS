/**
 * Basic C++ Program Structure
 * This program defines a simple class and demonstrates object creation and method invocation.
 */
#include<iostream>
using namespace std;
class A{
    private:
    int x;
    public: 
    A(int a){
        x=a;
    }
    void displayDetails(){
        cout<<"Value of x: "<<x<<endl;
    }
};
int main(){
    cout<<"Hello World!"<<endl;
    A obj(10);
    obj.displayDetails();
    return 0;
}