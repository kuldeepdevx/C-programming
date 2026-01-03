#include <stdio.h>
int main(){
    int a[4]={1,2,3,4};
    for(int i=0;i<4;i++){
        if(i%2==0){
            a[i]+=10;
        }
        else{
            a[i]*=2;
        }
    }
   for(int i=0;i<4;i++){
     printf("%d ",a[i]);
   }
    return 0;
}
