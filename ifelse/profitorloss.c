#include <stdio.h>
int main(){
    float cp,sp,p,l;
    printf("enter cp of item:");
    scanf("%f",&cp);
    printf("enter sp of item:");
    scanf("%f",&sp);
    if(sp>cp){
        p=sp-cp;
        printf("shopkepper made profit of %f",p);
    }
    if(sp<cp){
        l=cp-sp;
        printf("shopkepper made loss of %f",l);
    }
if (sp==cp){
    printf("shopkepper doesn't make any profit or loss");
}
return 0;
}