#include <stdio.h>
int main(){
    int n;
    printf("enter a num:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter %d element:\n",i+1);
        scanf("%d",&arr[i]);
    }
    int b[n];
    int a=n-1;
    for(int i=0;i<n;i++){
        b[a-i]=arr[i];
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
     for(int i=0;i<n;i++){
        printf("%d ",b[i]);
    }

}