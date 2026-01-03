#include <stdio.h>
int fact(int x){
    int factorial=1;
    for(int i=1;i<=x;i++){
        factorial=factorial*i;
    }
    return factorial;
}
int main(){
    int n,r;
    printf("enter n:");
    scanf("%d",&n);
    printf("enter r:");
    scanf("%d",&r);
    int combination=fact(n)/(fact(r)*fact(n-r));
    printf("%d",combination);
    return 0;
}