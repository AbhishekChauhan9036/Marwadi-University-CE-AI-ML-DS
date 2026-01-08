#include<bits/stdc++.h>
using namespace std;
class Base{
    private:
    int a, b;
    public:
    virtual void printDetails(){
        cout<<"I am Base Class"<<endl;
    }
};

class Derived: public Base{
    public:
    void printDetails(int x, int y){
        cout<<"I am Derived Class"<<endl;
        cout<<"sum of x and y is: "<<x+y<<endl;
    }
};

int main(){
    Base *b1;
    Derived d1;
    b1 = &d1;
    b1->printDetails();
    d1.printDetails(10,20);
    return 0;
}