// Call by reference
#include<stdio.h>
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("%d %d",*a,*b);
}
int main(){
    int x=6,y=9;
    swap(&x,&y); // Call by reference
    return 0;
}