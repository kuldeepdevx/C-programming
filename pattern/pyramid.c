#include <stdio.h>
int main(){
    int n,e;
    printf("enter 1:for star pyramid\n");
    printf("enter 2:for number pyramid\n");
    printf("enter 3:for alphabet pyramid\n");
    scanf("%d",&e);
    printf("enter a num:");
    scanf("%d",&n);
   for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            printf("  ");
        }
        for(int j=1;j<=2*i-1;j++){
            if(e==1)printf("*"); 
            if(e==2)printf("%d",j);
            if(e==3)printf("%c ",j+96);
        }
        printf("\n");
    }
    return 0;
}