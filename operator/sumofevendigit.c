 #include <stdio.h>
 int main(){
 int n;
    printf("enter a num:");
    scanf("%d",&n);
int s=0,d=0;
    while(n>0){
        d=n%10;
        if(d%2==0){
        s=s+d;
        }
        n=n/10;
    }
    printf("%d is sum of digit",s);
    return 0;
 }