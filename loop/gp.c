#include <stdio.h>

int main() {
    int a,r,n;
    printf("enter first term:");
    scanf("%d",&a);
    printf("common ratio:");
    scanf("%d",&r);
    printf("enter nth term:");
    scanf("%d",&n);
    int term=a;
    for(int i=1;i<=n;i++) {
        printf("%d\n", term);
        term=term*r;  
    }

    return 0;
}