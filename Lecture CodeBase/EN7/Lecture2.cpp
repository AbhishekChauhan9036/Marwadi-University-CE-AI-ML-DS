#include <iostream>
using namespace std;
int a = 10; // Global Variable
int main()
{
    cout << "Hello, World!" << "\n";
    cout << "Hello, World!" << endl;

    // this is single line comment

    /**
     * this is
     * multiline 
     * comment
    */

    int num1, num2; // Local Variable
    cout<<"Please enter the value of Num1 and Num2: ";
    cin>> num1 >> num2;
    cout<< "Value of Num1 is: "<< num1 << endl;
    cout<< "Value of Num2 is: "<<num2 << endl;

    string sName = "Siva Gopi Ratnala";
    string sAddress = "Andhra Pradesh";
    int sGRno = 8932;
    long long int sEnrollmentNum = 762837426874;
    string sSection = "2EN7";
    bool isPresent = true;
    cout << "Student Name: " << sName << endl;
    cout << "Student Address: " << sAddress << endl;
    cout << "Student GR No: " << sGRno << endl;
    cout << "Student Enrollment Number: " << sEnrollmentNum << endl;
    cout << "Student Section: " << sSection << endl;
    cout << "It's Present or Not: " << (isPresent?"Yes":"Not") << endl;

    return 0;
}