#include<stdio.h>
#include<limits.h>
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
    int max=INT_MIN;
    int row;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum+=arr[i][j];
        }
         if(max<sum){
            max=sum;
                row=i+1;
            }
    }
    printf("%d row has highest 1 %d is sum",row,max);
    return 0; 
}