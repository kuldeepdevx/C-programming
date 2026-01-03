 #include <stdio.h>
 int main(){
 int n,e;
 int a=0,b=1,sum=0;
 printf("enter 1:For nth term of fibonacci series\n");
 printf("enter 2:For n num of fibonacci series\n");
 printf("enter:");
 scanf("%d",&e);
    if(e==1){
        printf("enter nth term:");
    scanf("%d",&n);
    for(int i=1;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
    }
printf("nth fibonacci series num is %d",sum);
    }
    if(e==2){
 printf("enter n num:");
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for(int i=1;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
        printf("%d ",sum);
     }
    }
    if(e!=1 && e!=2){
        printf("invalid input!");
    }
    return 0;
 }