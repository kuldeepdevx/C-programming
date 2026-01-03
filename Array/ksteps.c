#include <stdio.h>
int reverse(int arr[],int n){
    int temp;
    for(int i=0,j=n;i<j;i++,j--){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return 0;
}
  int rotation(int arr[],int r,int n){
    int temp;
  for(int i=0,j=r;i<j;i++,j--){
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
  }
  for(int i=r+1,j=n;i<j;i++,j--){
    temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
  }
    return 0;
  }
int main(){
   int n;
    printf("enter number:");
    scanf("%d",&n);
     int m;
    printf("enter rotation:");
    scanf("%d",&m);
    int r;
    if(m>=n) r=m%n;
    else r=m;
     int arr[n];
    for(int i=0;i<n;i++){
       printf("enter %d element:",i+1);
       scanf("%d",&arr[i]);
    } 
    reverse(arr,n-1);
    rotation(arr,r-1,n-1);
     for(int i=0;i<n;i++){
       printf("%d ",arr[i]);
    } 
return 0;
}



