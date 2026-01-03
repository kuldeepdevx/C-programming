#include <stdio.h>
int main(){
    int arr[6]={3,5,4,2,0,1};
    int temp;
    int a=0;
    for(int j=0;j<6-1;j++){
        int index=j;
        int min=arr[j];
      for(int i=j+1;i<6;i++){
        if(min>arr[i]) {
        min=arr[i];
         index=i;
        }
        a++;
      }
        temp=arr[index];
        arr[index]=arr[j];
        arr[j]=temp;
}
for(int i=0;i<6;i++){
    printf("%d ",arr[i]);
}
printf("\n%d",a); 
return 0;
}

