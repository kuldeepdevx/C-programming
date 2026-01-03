#include <stdio.h>
int main(){
    int n;
    printf("enter a num:");
    scanf("%d",&n);
    if(n>99 && n<1000){
        printf("this is three digit num");
    }
    else{
         printf("this is not three digit num");
    }

    return 0;
}