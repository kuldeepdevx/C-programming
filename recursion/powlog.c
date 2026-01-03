#include <stdio.h>
int power(int n,int m){
    if(m==0) return 1;
int x=power(n,m/2);
if(m%2==0){
    return x*x;
}
else return x*x*n;
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