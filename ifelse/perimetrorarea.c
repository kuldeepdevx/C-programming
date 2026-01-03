#include <stdio.h>
int main(){
    float l,b,p,a;
    printf("enter length:");
    scanf("%f",&l);
     printf("enter breadth:");
    scanf("%f",&b);
    p=2*(l+b);
    a=l*b;
    if(a>p){
        printf("area is bigger than perimeter");
    }
    if(p>a){
        printf("perimeter is bigger than area");
    }
    if(a==p){
        printf("both are same");
    }
    return 0;
}