#include <stdio.h>
int main(){
    int year;
    scanf("%d", &year);
    if (year % 400 == 0){
        printf("It's a Leap Year");
    }
    else if (year % 100 != 0 && year % 4 == 0){
        printf("It's a Leap Year");
    }
    else{
        printf("It's not a Leap Year");
    }
    return 0;
}