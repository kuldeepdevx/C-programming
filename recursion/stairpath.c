#include <stdio.h>
int ways(int n){
    if(n==0) return 1;
    if(n<0) return 0;
    else if(n==1) return 1;
    return ways(n-1)+ways(n-2)+ways(n-3)+ways(n-4);
}

int main(){
    int n;
    printf("enter a num:");
    scanf("%d",&n);
    int ans=ways(n);
    printf("%d ",ans);
    return 0;
}