/**
 * Multilevel Inheritance
 */
#include"bits/stdc++.h"
using namespace std;
class A{
    protected:
    int a,b;
};
class B: public A{
    public:
    void setter(int x, int y){
        a = x;
        b = y;
    }
};
class C: public B{
    public:
    void getter(){
        cout<<"A value is: "<<a<<" |  B Value is: "<<b<<endl;
    }
};
int main(){
    C b1;
    b1.setter(10, 20);
    b1.getter();
}