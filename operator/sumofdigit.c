 #include <stdio.h>
 int main(){
 int n;
    printf("enter a num:");
    scanf("%d",&n);
int s=0;
    while(n>0){
        s=s+(n%10);
        n=n/10;
    }
    printf("%d is sum of digit",s);
    return 0;
}