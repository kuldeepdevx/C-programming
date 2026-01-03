// // By using recursive call

#include <stdio.h>
void sum(int n,int s){
    if(n==0){
        printf("%d",s);
        return;
    }
    sum(n-1,s+n);
    return;
}

int main(){
    int n;
    int s=0;
    printf("enter a num:");
    scanf("%d",&n);
    sum(n,s);
    return 0;
}

// By using return type
// #include <stdio.h>
// int sum(int n){
//     if(n==1) return 1;
//     return n+sum(n-1);
// }
// int main(){
//     int n;
//     printf("enter a num:");
//     scanf("%d",&n);
//     int ans=sum(n);
//     printf("%d",ans);
//     return 0;
// }