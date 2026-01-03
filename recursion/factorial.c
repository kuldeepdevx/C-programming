#include <stdio.h>
int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int n;
    printf("enter a num:");
    scanf("%d",&n);
    int ans=fact(n);
    printf("factorial of %d is %d",n,ans);
    return 0;
}