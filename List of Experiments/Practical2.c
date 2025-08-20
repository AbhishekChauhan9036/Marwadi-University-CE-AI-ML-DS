// Develop branching programs using if-else and switch
#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    if (a % 2 == 0) {
        printf("Even");
    }
    else {
        printf("Odd");
    }

    switch (a){
    case 1:
        printf("\nOne");
        break;
    case 2:
        printf("\nTwo");
        break;
    default:
        printf("\nOther");
    }
    return 0;
}
