// print numbers from 11 to 20 using a for loop
#include<stdio.h>
/*
int main(){
    for(int i=11;i<=20;i++){
        printf("%d\n",i);
    }
    return 0;
}*/

// print all even numbers b/w 20 to 30
/*
int main(){
    for(int i=20;i<=30;i++){
        if(i%2==0){
            printf("%d\n",i);
        }
    }
}
*/

//print number from 5 to 1 in desending order
/*int main(){
    for(int i=5;i>=1;i--){
        printf("%d\n",i);
    }

    for(int i=1;i<=5;i++){
        printf("%d\n",6-i);
    }
    return 0;
}*/


// write a program to print table of 3 using while loop
/*int main(){
    int i =1;
    while(i<=10){
        printf("%d\n",i*3);
        i++;
    }
    return 0;
}

int main(){
    int i =1;
    do{
        printf("%d\n",i*3);
        i++;
    }while(i<=10);
    return 0;
}*/

/*
int main(){
    for(int i=1;i<=5;i++){
        printf("%d\n",i);
        if(i==3) break;
    }
    return 0;
}*/

/*
int main(){
    for(int i=1;i<=5;i++){
        if(i==2) continue;
        printf("%d\n",i);
    }
    return 0;
}*/

int main(){
    int num = 12;
    if(num>0){
        goto plus;
    }
    plus:
    printf("Positive Number");
    return 0;
}