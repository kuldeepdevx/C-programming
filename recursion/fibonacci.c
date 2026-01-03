#include <stdio.h>
int fibo(int n){
    if(n<=1) return n;
    return fibo(n-1)+fibo(n-2);
}

int main(){
    int n;
    printf("enter a num:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    int ans=fibo(i);
    printf("%d ",ans);
    }
    return 0;
}