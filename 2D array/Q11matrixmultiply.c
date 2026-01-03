#include <stdio.h>
int main(){
    int n,m;
    printf("enter no of rows for matrix 1:");
    scanf("%d",&n);
     printf("enter no of columns for matrix 1:");
    scanf("%d",&m);
    int arr[n][m];
    int n1,m1;
     printf("enter no of rows for matrix 2:");
    scanf("%d",&n1);
     printf("enter no of columns for matrix 2:");
    scanf("%d",&m1);
    int brr[n1][m1];
  if(m!=n1){
    printf("column of matrix 1 and row of matrix 2 should be same");
    return 0;
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        printf("enter (%d,%d) element for matrix 1:",i+1,j+1);
        scanf("%d",&arr[i][j]);
    }
  }
printf("\n");
 for(int i=0;i<n1;i++){
    for(int j=0;j<m1;j++){
        printf("enter (%d,%d) element for matrix 2:",i+1,j+1);
        scanf("%d",&brr[i][j]);
    }
  }

 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
  printf("\n");

 for(int i=0;i<n1;i++){
    for(int j=0;j<m1;j++){
        printf("%d ",brr[i][j]);
    }
    printf("\n");
  }
   printf("\n");
  int new[n][m1];
  for(int i=0;i<n;i++){
    for(int j=0;j<m1;j++){
        int mul=0;
        for(int k=0;k<m;k++){
       mul+=arr[i][k]*brr[k][j];
        }
         new[i][j]=mul;
    }
  }
   for(int i=0;i<n;i++){
    for(int j=0;j<m1;j++){
        printf("%d ",new[i][j]);
    }
    printf("\n");
  }
    return 0;
}