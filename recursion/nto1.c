#include <stdio.h>
void dec(int x){
    if(x==0){
        return;
    }
    printf("%d ",x);
    dec(x-1);
    return;
}

int main(){
    int n;
    printf("enter a num:");
    scanf("%d",&n);
    dec(n);
    return 0;
}