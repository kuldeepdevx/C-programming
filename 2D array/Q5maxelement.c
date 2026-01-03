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
    int r,c;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(max<arr[i][j]){
                max=arr[i][j];
                r=i+1;
                c=j+1;
            }
        }
    }
    printf("%d is maximum element and its index is (%d,%d)",max,r,c);
    
    return 0; 
}