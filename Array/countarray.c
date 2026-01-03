#include <stdio.h>
int main(){
    int n;
    printf("enter a num:");
    scanf("%d",&n);
   int arr[5]={5,3,7,9,10};
   int count=0;
   for(int i=0;i<5;i++){
   if(arr[i]>n){
    count++;
   }
   }
   printf("%d is count",count);
return 0;
} 