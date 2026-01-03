#include <stdio.h>
void greet(int n){
    for(int i=1;i<=n;i++){
        printf("hello,good morning\n");
    }
}
int main(){
    int n;
    printf("enter a num:");
    scanf("%d",&n);
    greet(n);
    return 0;
}










