#include <stdio.h>
#include <math.h>
int main(){
    int a,b;
    printf("enter a num");
    scanf("%d",&a);
     printf("enter power");
    scanf("%d",&b);
    // int root=sqrt(a);
    int ans=pow(a,b);
    // printf("square root of %d is %d",a,root);
     printf("%d",ans);
    return 0;
}
