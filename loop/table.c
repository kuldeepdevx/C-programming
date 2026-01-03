#include <Stdio.h>
int main(){
    int n;
    printf("enter a num:");
    scanf("%d",&n);
    for(int i=n;i<=n*10;i+=n){
        printf("%d ",i);
    }
    return 0;
}