/**
 * C++ program to sort an array of integers in ascending order
 * using the Bubble Sort algorithm.
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr [5] = {90, 2, 330, -80, 50};
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];  
                arr[j]=temp;
            }
        }
    }
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}