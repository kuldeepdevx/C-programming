#include<stdio.h>
int main(){
    int n1,m1;
    printf("enter no of rows for matrics 1:");
    scanf("%d",&n1);
    printf("enter no of columns for matrics 1:");
    scanf("%d",&m1);
    int arr[n1][m1];
    int n2,m2;
    printf("enter no of rows for matrics 2:");
    scanf("%d",&n2);
    printf("enter no of columns for matrics 2:");
    scanf("%d",&m2);
    if(n1!=n2 || m1!=m2){
        printf("MATRICS ROWS & COLUMNS SHOULD BE EQUAL");
        return 0;
    }
    int arr1[n2][m2];
     for(int i=0;i<n1;i++){
        for(int j=0;j<m1;j++){
            printf("enter (%d,%d) for matrics 1:",i+1,j+1);
          scanf("%d",&arr[i][j]); 
        }
    }
     for(int i=0;i<n2;i++){
        for(int j=0;j<m2;j++){
            printf("enter (%d,%d) for matrics 2:",i+1,j+1);
          scanf("%d",&arr1[i][j]); 
        }
    }
    int arr2[n1][m1];
    for(int i=0;i<n1;i++){
        for(int j=0;j<m1;j++){
            arr2[i][j]=arr[i][j]+arr1[i][j];
        }
    }
     for(int i=0;i<n1;i++){
        for(int j=0;j<m1;j++){
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}