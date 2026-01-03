#include <stdio.h>
int main(){
    int n,m;
    printf("enter num of rows:");
    scanf("%d",&n);
    printf("enter num of column:");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=1;j<=m;j++){
            printf("*");
        }
        printf("\n");
    }
return 0;
}