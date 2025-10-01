#include<stdio.h>

// function Declaration & Definition
// Take Something Return Something
int add(int a, int b){
    return a+b;
}

// Take Something Return Nothing
void sub(int a, int b){
    printf("%d",a-b);
}

// Take Nothing Return Something
int mul(){
    int a = 10;
    int b = 5;
    return a*b;
}

// Take Nothing Return Nothing
void div(){
    int a = 10;
    int b = 5;
    printf("%d",a/b);
}


int main(){
    int result = add(10,15); //Function Call
    printf("%d",result);
    return 0;
}

/*
Natures of Function
1. Take Something Return Something
2. Take Something Return Nothing
3. Take Nothing Return Something
4. Take Nothing Return Nothing
*/