#include <stdio.h>
int main(){
    int n;
    printf("enter a num:");
    scanf("%d",&n);
    int f=n/2+1;
    for(int f=1;f<=n*2-1;f++){
        // printf("%d ",f);
        printf("%c ",f+64);
    }
    printf("\n");
    for(int i=1;i<=n-1;i++){
        int x=1;
        for(int a=1;a<=n-i;a++){
            // printf("%d ",x);
            printf("%c ",x+64);
            x++;
        }
        for(int k=1;k<=2*i-1;k++){
            printf("  ");
            x++;
        }
        for(int j=1;j<=n-i;j++){
            // printf("%d ",x);
            printf("%c ",x+64);
            x++;
        }
        printf("\n");
    }
    return 0;
}