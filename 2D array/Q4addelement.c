#include<stdio.h>
int main(){
    int n,m;
    printf("enter no of rows for matrics:");
    scanf("%d",&n);
    printf("enter no of columns for matrics:");
    scanf("%d",&m);
    int arr[n][m];
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("enter (%d,%d) for matrics :",i+1,j+1);
          scanf("%d",&arr[i][j]); 
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum+=arr[i][j];
        }
    }
    printf("%d is sum of elements",sum);
    
    return 0;
}