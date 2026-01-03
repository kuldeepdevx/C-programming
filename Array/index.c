#include <stdio.h>
int main(){
   int n;
    printf("enter number of students:");
    scanf("%d",&n);
     int arr[n];
    for(int i=0;i<n;i++){
       printf("student %d marks:\n",i+1);
       scanf("%d",&arr[i]);
    }
   for(int i=0;i<n;i++){ 
    if(arr[i]<35){
   printf("roll no:%d\n",i);
    }
   }
    

return 0;
}