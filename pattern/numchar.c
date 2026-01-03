#include <stdio.h>
int main(){
    int n;
    printf("enter a num:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
           if(i%2==0){
           char ch=(char)j;
            printf("%c ",ch+64);
           }
           else if(i%2!=0){
            printf("%d ",j);
           }
        }
printf("\n");
    }
    return 0;
}