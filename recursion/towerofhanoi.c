#include <stdio.h>
void tower(int n,char s,char h,char t){
    if(n==0) return;
    tower(n-1,s,t,h);
    printf("%c -> %c\n",s,t);
    tower(n-1,h,s,t);
    return;
}

int main(){
    int n;
    printf("enter a num:");
    scanf("%d",&n);
    tower(n,'A','B','c');
    return 0;
}