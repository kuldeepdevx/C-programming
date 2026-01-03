 #include <stdio.h>
 int main(){
 int n;
    printf("enter a num:");
    scanf("%d",&n);
    int r=0,ld;
    while(n>0){
        r*=10;
        r+=n%10;
        n=n/10;
    }
    printf("%d is reverse num",r);
    return 0;
}