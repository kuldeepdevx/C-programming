#include <stdio.h>
int main(){
    int a,b;
    printf("enter first num: ");
    scanf("%d",&a);
    printf("enter second num: ");
    scanf("%d",&b);
    int c=a/b;
    int r=a-(b*c);
    printf("%d",r);
    return 0;
}