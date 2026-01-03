#include <stdio.h>
int main(){
    int n,m;
    char x;
    printf("enter dirst num:");
    scanf("%d",&n);
    printf("enter second num:");
    scanf("%d",&m);
    printf("enter operator +,-,/,*:");
    scanf(" %c",&x);
    switch (x)
    {
        case '+':
          printf("Ans is %d+%d is %d",n,m,n+m);
          break;
        case '-':
            printf("Ans is %d-%d is %d",n,m,n-m);
            break;
        case '*':
             printf("Ans is %d*%d is %d",n,m,n*m);   
             break;
        case '/':
             printf("Ans is %d/%d is %f",n,m,(float)n/m);  
             break;
        default:
             printf("Invalid input!");         
    }
    return 0;
}