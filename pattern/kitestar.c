#include <stdio.h>
int main(){
    int n;
    printf("enter a num:");
    scanf("%d",&n);
    int a=n/2;
    int ml=(n/2)+1;
    int nst=1;
   for(int i=1;i<=n;i++){
        for(int k=1;k<=a;k++){
            printf("  ");
        }
        for(int j=1;j<=nst;j++){
            printf("* ");
        }
if(i<ml){
    a--;
    nst+=2;
}
else{
    a++;
    nst-=2;
}
        printf("\n");
    }
    return 0;
}

