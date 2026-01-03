#include <stdio.h>
int power(int n,int m){
    if(m==0) return 1;
    return n*power(n,m-1);
}
int main(){
    int n,m;
    printf("enter a num:");
    scanf("%d",&n);
     printf("enter power:");
    scanf("%d",&m);
    int ans=power(n,m);
    printf("%d",ans);
    return 0;
}