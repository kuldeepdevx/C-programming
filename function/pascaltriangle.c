#include <stdio.h>
int fact(int x){
    int factorial=1;
    for(int i=1;i<=x;i++){
        factorial=factorial*i;
    }
    return factorial;
}
int combination(int n,int r){
    int ans=fact(n)/(fact(r)*fact(n-r));
    return ans;
}
int main(){
    int n;
    printf("enter a num:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int k=1;k<=n-i;k++){
            printf("  ");
        }
        for(int j=0;j<=i;j++){
    int ncr=combination(i,j);
    printf("%d ",ncr);
        }
        printf("\n");
    }
    return 0;
}