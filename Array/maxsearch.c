#include <Stdio.h>
#include <limits.h>
int main(){
    int n;
    printf("enter a num:");
    scanf("%d",&n);
    int arr[n];
     for(int i=0;i<n;i++){
        printf("enter %d element:\n",i+1);
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("%d is max element in this array",max);
    return 0;
}