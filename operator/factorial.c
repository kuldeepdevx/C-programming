// #include <stdio.h>
//  int main(){
//  int n,fact=1;
//     printf("enter a num:");
//     scanf("%d",&n);
//     if(n>0)for(int i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     printf("%d is factorial of %d",fact,n);
    
//     return 0;
// }

#include <stdio.h>
 int main(){
 int n,fact=1;
    printf("enter a num:");
    scanf("%d",&n);
    if(n>0)for(int i=1;i<=n;i++){
        fact=fact*i;
         printf("%d is factorial of %d\n",fact,i);
    }
    if(n==0){
    printf("%d is factorial of %d",fact,n);
}
    
    return 0;
}

