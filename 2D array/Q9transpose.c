#include <stdio.h>
int main(){
    int n,m;
    printf("enter no of rows for matrix:");
    scanf("%d",&n);
    printf("enter no of columns for matrix:");
    scanf("%d",&m);
    int arr[n][m];
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("enter (%d,%d) for matrix :",i+1,j+1);
          scanf("%d",&arr[i][j]); 
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    int temp;
     for(int i=0;i<n;i++){
        for(int j=i;j<m;j++){
            temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
        printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
        }





// #include <stdio.h>
// int main(){
//     int n,m;
//     printf("enter no of rows for matrix:");
//     scanf("%d",&n);
//     printf("enter no of columns for matrix:");
//     scanf("%d",&m);
//     int arr[n][m];
//      for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             printf("enter (%d,%d) for matrix :",i+1,j+1);
//           scanf("%d",&arr[i][j]); 
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n");
//      for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             printf("%d ",arr[j][i]);
//         }
//         printf("\n");
//     }
//     return 0;
//         }


// #include <stdio.h>
// int main(){
//     int n,m;
//     printf("enter no of rows for matrix:");
//     scanf("%d",&n);
//     printf("enter no of columns for matrix:");
//     scanf("%d",&m);
//     int arr[n][m];
//      for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             printf("enter (%d,%d) for matrix :",i+1,j+1);
//           scanf("%d",&arr[i][j]); 
//         }
//     }
//      for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n");
//     int transpose[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             transpose[i][j] = arr[j][i];
//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             printf("%d ",transpose[i][j]);
//         }
//         printf("\n");
//     } 
//     return 0;
//         }