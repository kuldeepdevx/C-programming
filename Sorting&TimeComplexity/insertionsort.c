#include <Stdio.h>
int main(){
    int arr[5]={5,3,4,2,1};
    int temp;
    int a=0;
    for(int i=1;i<5;i++){
        for(int j=i;j>0;j--){
            if(arr[j]<arr[j-1]){
                temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp; 
            }
            a++;
        }
    }
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }

        printf("\n%d ",a);
    return 0;
}

