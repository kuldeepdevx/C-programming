#include<stdio.h>
int main(){
    int n,m;
    int num;
    printf("which num to print:");
    scanf("%d",&num);
    printf("enter no of rows:");
    scanf("%d",&n);
    printf("enter no of columns:");
    scanf("%d",&m);
    int arr[n][m];
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          arr[i][j]=num;  
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