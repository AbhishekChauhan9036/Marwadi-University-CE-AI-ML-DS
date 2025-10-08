#include<stdio.h>

//Take Something Return Something
//Function Declaration
int add(int num1, int num2){
    return num1+num2;
}

//Take Something Return Nothing
void sub(int num1, int num2){
    printf("%d",num1-num2);
}

//Take Nothing Return Something
int mul(){
    int num1 = 10, num2 = 4;
    return num1*num2;
}

//Take Nothing Return Nothing
void div(){
    int num1 = 20, num2 = 5;
    printf("%d",num1/num2);
}

int main(){
    int ans = add(10,15);//function Call
    printf("%d",ans);
    return 0;
}


/**
 * Nature of Functions
 * 1. Take Something Return Something
 * 2. Take Something Return Nothing
 * 3. Take Nothing Return Something
 * 4. Take Nothing Return Nothing
 */
