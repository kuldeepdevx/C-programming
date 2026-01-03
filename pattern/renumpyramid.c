#include <stdio.h>
int main(){
    int n;
    printf("enter a num:");
    scanf("%d",&n);
    int a=0;
    int l=1;
   for(int i=1;i<=n;i++){
    int l=i-1;
        for(int k=1;k<=n-i;k++){
            printf("  ");
        }
        for(int j=1;j<=i;j++){
            printf("%d ",j); 
        }
        for(int e=1;e<=a;e++){
            printf("%d ",l);
            l--;
        }
        a++;
        printf("\n");
    }
    return 0;
}