#include<stdio.h>
int main(){
    int k;
    int arr[5]={45,19,13,20,66};
    printf("enter k:");
    scanf("%d",&k);
    if(k>5) {
        printf("invalid");
        return 0;
    }
    int temp;
    for(int i=0;i<k;i++){
        for(int j=0;j<5-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("%d",arr[k-1]);
    return 0;
}