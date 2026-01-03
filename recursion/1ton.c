#include <stdio.h>
void inc(int x){
    if(x==0){
        return;
    }
    inc(x-1);
    printf("%d ",x);
    return;
}

int main(){
    int n;
    printf("enter a num:");
    scanf("%d",&n);
    inc(n);
    return 0;
}