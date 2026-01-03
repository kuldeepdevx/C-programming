// #include <stdio.h>
// int main(){
//     int n,m;
//     printf("Enter number of rows for matrix: ");
//     scanf("%d",&n);     
//     printf("Enter number of columns for matrix: ");
//     scanf("%d",&m);
//     int arr[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             printf("Enter (%d,%d) for matrix: ",i+1,j+1);
//             scanf("%d",&arr[i][j]); 
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             printf("%d ",arr[i][j]); 
//         }
//         printf("\n");
//     }
//     printf("\n");
// int temp;
// for(int i=0;i<m;i++){
//     for(int j=n-1;j>=0;j--){
//         printf("%d ",arr[j][i]);
//     }
//     printf("\n");
// }
//     return 0;
// }

//Another method by doing transpose and then revrse first and last element.

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
        int a=n-1;
        for(int j=0;j<a;j++){
            temp=arr[i][j];
            arr[i][j]=arr[i][a];
            arr[i][a]=temp;
            a--;
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