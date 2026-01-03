#include <stdio.h>
int main(){
    int n,m;
    printf("enter a num:");
    scanf("%d",&n);
     printf("enter power:");
    scanf("%d",&m);
    int ans=1;
    for(int i=1;i<=m;i++){
   ans=ans*n;
    }
    printf("%d",ans);

    return 0;
}