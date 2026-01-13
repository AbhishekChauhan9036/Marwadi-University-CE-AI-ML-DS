#include<iostream>
#include<string>
using namespace std;
int num1 = 1000; // Global Variable
int main(){
    // this is single line comment
    /**
     * this is 
     * multiline 
     * comment
     */
    string name = "Rohan"; // Local Variable
    cout<<"Global Variable num1: "<<num1<<endl;
    cout<<"Local Variable name: "<<name<<endl;
    return 0;
}

/**
 * Task : you need create 2 varibale in C++ one is global and other is local.
 * and try to acces local variable from outside main function.
 */