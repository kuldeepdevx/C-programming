#include <Stdio.h>
int main(){
    int n;
    printf("enter a num:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter %d element:\n",i+1);
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    printf("sum of all elements is %d",sum);
    return 0;
}