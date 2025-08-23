/**
 * Display grade based on marks using switch: A = 90–100,
 *  B = 75–89, C = 50–74, F = < 50.
 */
#include<stdio.h>
int main(){
    int marks;
    scanf("%d",&marks);
    if(marks>=90 && marks<=100){
        printf("Grade A");
    }else if(marks>=75 && marks<=89){
        printf("Grade B");
    }else if(marks>=50 && marks<=74){
        printf("Grade C");
    }else{
        printf("Fail");
    }
    return 0;
}