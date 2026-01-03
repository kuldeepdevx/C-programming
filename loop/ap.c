#include <stdio.h>
int main(){
    int a,n,d;
    printf("enter first term:");
    scanf("%d",&a);
    printf("enter diff:");
    scanf("%d",&d);
    printf("enter nth term:");
    scanf("%d",&n);
    if (d == 0) {
    for (int i=a;i<=n;i++) {
        printf("%d ",i);
    }
}
 else if(d>0){
for(int i=a;i<=a+(n-1)*d;i=i+d){
        printf("%d ",i);
    }
}
else 
{
  if(d<0){

  for(int i=a;i>=a+(n-1)*d;i=i+d){
        printf("%d ",i);
    } 
         }
}
    return 0;
}