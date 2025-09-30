// Call by Value & Call by reference
#include<stdio.h>
void swap(int a,int b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int x=6,y=9;
    swap(x,y); // Call by Value
    return 0;
}