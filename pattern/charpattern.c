#include <stdio.h>
int main(){
    int n;
    printf("enter a num:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            char ch=(char)j;
            printf("%c ",ch+64);
        }
printf("\n");
    }
    return 0;
}