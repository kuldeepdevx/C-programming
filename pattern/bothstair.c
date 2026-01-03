#include <stdio.h>
int main(){
    int n;
    printf("enter a num:");
    scanf("%d",&n);
    int f=n/2+1;
    for(int f=1;f<=n*2-1;f++){
        printf("* ");
    }
    printf("\n");
    for(int i=1;i<=n-1;i++){
        for(int a=1;a<=n-i;a++){
            printf("* ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("  ");
        }
        for(int j=1;j<=n-i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}