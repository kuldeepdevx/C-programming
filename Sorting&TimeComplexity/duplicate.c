// M-1 by for loop

// #include <stdio.h>
// #include <limits.h>
// int main(){
//     int arr[6];
//     for(int i=0;i<6;i++){
//         printf("Enter %d element:",i+1);
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<6;i++){
//         for(int j=i+1;j<6;j++){
//             if(arr[i]==arr[j]) printf("%d is duplicate",arr[i]);
//         }
//     }
//     return 0;
// }


// M-2  by visited array

#include <stdio.h>
int main(){
    int n;
    printf("enter a num:");
    scanf("%d",&n);
    int arr[n];
    int visited[n];
    
    for(int i=0;i<n;i++){
        visited[i]=0;
    }

    for(int i=0;i<n;i++){
        printf("Enter %d element:",i+1);
        scanf("%d",&arr[i]); 
    }
int a;
    for(int i=0;i<n;i++){
        a=arr[i];
        if(visited[a]==1) {
            printf("%d is duplicate",arr[i]);
        break;
        }
        visited[a]=1;
    }

    return 0;
}

// M-3 by sum and then - n num