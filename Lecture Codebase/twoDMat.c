#include<stdio.h>
int main(){
    // int arr[2][3]={{12,14},{3,8},{81,90}};
    // printf("%d",arr[1][1]);
    int n,m;
    scanf("%d %d",&n,&m);
    int mat[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&mat[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",mat[i][j]);
        }
    }
    return 0;
}