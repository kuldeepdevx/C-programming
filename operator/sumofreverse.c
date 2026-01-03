 #include <stdio.h>
 int main(){
 int n;
    printf("enter a num:");
    scanf("%d",&n);
    int x=n;
    int r=0,ld;
    while(n>0){
        r*=10;
        r+=n%10;
        n=n/10;
    }
    printf("%d+%d is %d",r,x,r+x);
    return 0;
}