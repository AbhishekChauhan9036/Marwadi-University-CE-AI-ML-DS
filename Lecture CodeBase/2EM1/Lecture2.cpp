#include<bits/stdc++.h>
using namespace std;
class Number{
    private:
    int value;
    public:
    void setValue(int v){
        value = v;
    }
    void operator+(){
        value+=value;
    }
    void display(){
        cout<<"Value: "<<value<<endl;
    }
};
int main(){
    Number num;
    num.setValue(10);
    +num;
    num.display();
    return 0;
}