#include <stdio.h>
int main(){
    int n;
    printf("enter a num:");
    scanf("%d",&n);
    int f=n/2+1;
    int z=1;
    for(int f=1;f<=n*2-1;f++){
      if(f<n){
        printf("%d ",z);
        z++;
      }
      else {
        printf("%d ",z);
        z--;
      }
    }
    printf("\n");
    for(int i=1;i<=n-1;i++){
        int x=1;
        int w=n-i;
        for(int a=1;a<=n-i;a++){
            printf("%d ",x);
            x++;
        }
        for(int k=1;k<=2*i-1;k++){
            printf("  ");
        }
        for(int j=1;j<=n-i;j++){
            printf("%d ",w);
            w--;
        }
        printf("\n");
    }
    return 0;
}