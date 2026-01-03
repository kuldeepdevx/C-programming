#include <stdio.h>
#include <stdbool.h>
int main(){
    int arr[5]={5,4,3,2,1};
    int n=5;
    int temp;
     for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
        }
        printf("\n");
        int a=0;
    for(int i=0;i<n-1;i++){
       bool f=false;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]<arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                f=true;
            }
            a++;
        }
        if(!f) break;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
        }
        printf("\n%d",a);
    return 0;
}