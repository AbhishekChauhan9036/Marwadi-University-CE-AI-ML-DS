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