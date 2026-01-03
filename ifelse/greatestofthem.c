#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter first num:");
    scanf("%d",&a);
     printf("enter second num:");
    scanf("%d",&b);
     printf("enter third num:");
    scanf("%d",&c);
    if(a>b){
        if(a>c){
            printf("%d is greater num",a);
        }
        else{
            printf("%d is greater num",c);
        }
    }
        else{
            if(b>c){
                printf("%d is greater num",b);
            }
            else{
                printf("%d is greater num",c);
            }
        }
        if(a==b&&b==c){
            printf("all are equal");
        }
    
    return 0;
}