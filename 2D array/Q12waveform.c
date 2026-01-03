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
            printf("enter (%d,%d) element for matrix:",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        if(i%2==0){
        for(int j=0;j<n;j++){
          printf("%d ",arr[j][i]);
        }
    }
           else { for(int k=m-1;k>=0;k--){
                printf("%d ",arr[k][i]);
            }
        }
        printf("\n");
    }
printf("\n");
    for(int i=0;i<n;i++){
       if(i%2==0) for(int j=0;j<m;j++){
            printf("%d ",arr[i][j]);
        }
    else {
        for(int j=m-1;j>=0;j--){
            printf("%d ",arr[i][j]);
        }
    }
        printf("\n");
    }

    return 0;
}





































// #include <stdio.h>
// int main(){
//     int n,m;
//      printf("enter no of rows for matrix:");
//     scanf("%d",&n);     
//     printf("enter no of columns for matrix:");
//     scanf("%d",&m);
//      int arr[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             printf("enter (%d,%d) element for matrix:",i+1,j+1);
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     // int temp;
//     // int a=n-1;
//     // for(int i=0;i<m;i++){
//         // for(int j=0;j<n;j++){
//         //     // temp=arr[i][j];
//         //     arr[i][j]=arr[a][i];
//         //     arr[a][i]=arr[i][a];
//         //     a--;
//         // }
//     // }
//     int temp;
//     for(int i=0;i<m;i++){
//         for(int j=i;j<n;j++){
//             temp=arr[i][j];
//             arr[i][j]=arr[j][i];
//             arr[j][i]=temp;
//         }
//         printf("\n");
//     }

//     for(int i=0;i<m;i++){
//         for(int j=n-1,a=0;j>=0;j--,a++){
//             temp=arr[i][a];
//             arr[i][a]=arr[i][j];
//             arr[i][j]=temp;
//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }