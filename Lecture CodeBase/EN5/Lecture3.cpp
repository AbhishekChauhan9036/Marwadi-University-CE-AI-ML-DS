#include<iostream>
using namespace std;

// Strongly typed enumeration for traffic light signals
enum TrafficLight { 
    RED = 1,
    YELLOW = 2,
    GREEN = 3
};

int main(){
    TrafficLight signal = RED;
    if(signal == RED){
        cout << "Stop" << endl;
    } else if(signal == YELLOW){
        cout << "Caution" << endl;
    } else if(signal == GREEN){
        cout << "Go" << endl;
    }

    const int a = 10; // Constant variable  ->> 10 is a literal

    char name[] = {'R', 'a', 'k', 'e', 's', 'h', '\0'}; // Character array initialization
    string FirstName = "Rakesh";
    string LastName = "Kumar";
    string FullName = FirstName + " " + LastName; // String concatenation
    cout << "Full Name: " << FullName << endl;

    bool isAdult = true; // Boolean variable
    if(!isAdult){
        cout << "Person is an adult." << endl;
    } else {
        cout << "Person is not an adult." << endl;
    }

    /**
     * 1 && 1 = 1;
     * 1 && 0 = 0;
     * 0 && 1 = 0;
     * 0 && 0 = 0;
     * 
     * 1 || 1 = 1;
     * 1 || 0 = 1;  
     * 0 || 1 = 1;
     * 0 || 0 = 0;
     * 
     * 
     *  12 & 5 = 4;  // Bitwise AND 
     *  12 = 1100
     *  5  = 0101
     * ------------
     *       0100  = 4
     * 
     * 
     * 1's Complement:
     *  119 = 01110111
     *  ~   = 10001000
     * ------------
     *       136
     */


     int num = 15;
     if(num>0){
        cout << "positive." << endl;
     } else {
        cout << "negative." << endl;
     }
     cout<< (num>0 ? "positive" : "negative") << endl; // Ternary Operator


    return 0;
}