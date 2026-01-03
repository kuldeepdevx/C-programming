#include <stdio.h>
int search(int arr[],int n,int m){
    int a;
    for(int i=0;i<n;i++){
    if(arr[i]==m){
       a=1;
       break;
    }
    else a=0;
    }
    return a;
}
int main(){
   int n;
    printf("enter number:");
    scanf("%d",&n);
     int arr[n];
    for(int i=0;i<n;i++){
       printf("enter %d element:",i+1);
       scanf("%d",&arr[i]);
    } 
     int m;
    printf("enter number to find:");
    scanf("%d",&m);
    int a=search(arr,n,m);
     if(a) printf("element is present");
     else  printf("element is not present");
return 0;
}