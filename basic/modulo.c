#include <stdio.h>
int main(){
    int a,b;
    printf("enter a num: ");
    scanf("%d",&a);
    printf("enter b num: ");
    scanf("%d",&b);
    int r=a%b;
    printf("%d",r);
    return 0;
}