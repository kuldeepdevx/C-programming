#include <stdio.h>
int main(){
    int n;
    printf("enter a num:");
    scanf("%d",&n);
    int x=0;
    if(n<0){
        n*=-1;
    }
    if(n==0){
        printf("the no of digits is 1");
    }
   else{ while(n>0){
        n=n/10;
        x++;
    }
    printf("the no of digits is %d",x);
}
    return 0;
}