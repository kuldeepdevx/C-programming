// #include <stdio.h>
// int main(){
//     int n,m;
//     printf("enter matrix row:");
//     scanf("%d",&n);
//      printf("enter matrix column:");
//     scanf("%d",&m);
//     int arr[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             printf("enter (%d,%d) element:",i+1,j+1);
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     int minr,minc,maxc,maxr;
//     int count=0;
//     int te=n*m;
//     minr=0;
//     minc=0;
//     maxr=n-1;
//     maxc=m-1;
//     while(count<te){
//         for(int i=minc;i<=maxc;i++){
//             printf("%d ",arr[minr][i]);
//             count++;
//         }
//         minr++;
//         for(int i=minr;i<=maxr;i++){
//             printf("%d ",arr[i][maxc]);
//             count++;
//         }
//         maxc--;
//         if(count<te){
//         for(int i=maxc;i>=minc;i--){
//             printf("%d ",arr[maxr][i]);
//             count++;
//         }
//     }
//         maxr--;
//         for(int i=maxr;i>=minr;i--){
//             printf("%d ",arr[i][minc]);
//             count++;
//         }
//         minc++;
//     }
//     return 0;
// }




//input the matrix by code n*n and row==column


#include <stdio.h>
int main(){
    int n;
    printf("enter matrix row & column:");
    scanf("%d",&n);
    int arr[n][n];
    int minr,minc,maxc,maxr;
    int count=0;
    int te=n*n;
    minr=0;
    minc=0;
    maxr=n-1;
    maxc=n-1;
    int a=1;
    while(count<te){
        for(int i=minc;i<=maxc;i++){
            arr[minr][i]=a;
            a++;
            count++;
        }
        minr++;
        for(int i=minr;i<=maxr;i++){
            arr[i][maxc]=a;
            a++;
            count++;
        }
        maxc--;
        if(count<te){
        for(int i=maxc;i>=minc;i--){
            arr[maxr][i]=a;
            a++;
            count++;
        }
    }
        maxr--;
        for(int i=maxr;i>=minr;i--){
            arr[i][minc]=a;
            a++;
            count++;
        }
        minc++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}