#include <stdio.h>
int min(int c,int d){
    if(c>d) return d;
    else return c;
}
int gcd(int x,int y){
    int hcf=1;
    for(int i=2;i<=min(x,y);i++){
     if(x%i==0 &&y%i==0){
        hcf=i;
     }
    }
    return hcf;
}
int main(){
    int a,b;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
   int ans=gcd(a,b);
    printf("Hcf of %d and %d is:%d",a,b,ans);
    return 0;
}