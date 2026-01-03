#include <stdio.h>
int main(){
    int a,b;
    printf("enter a point:");
    scanf("%d",&a);
    printf("enter b point:");
    scanf("%d",&b);
    if(a==0 && b==0){
        printf("point lies on origin");
    }
    else if(a!=0 && b==0){
        printf("point lies on x axis");
    }
    else if(a==0 && b!=0){
            printf("points lies on y axis");
        }
        else{
            printf("points doesn't lies on x or y axis");
        }
    return 0;
}