#include <stdio.h>
int main(){
    int n,m;
    printf("enter num of rows:");
    scanf("%d",&n);
    printf("enter num of columns:");
    scanf("%d",&m);
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            // printf("enter (%d,%d) element:",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}


















