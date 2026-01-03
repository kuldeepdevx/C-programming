#include <stdio.h>
int main(){
int e;
printf("enter 1:For list of all ascii values of alphabet\n");
printf("enter 2:For individual ascii value of alphabet\n");
printf("enter:");
scanf("%d",&e);
if(e==1){
    for(int i=65,j=97;i<=90 && j<=122;i++,j++){
char a=(char)i,b=(char)j; 
printf("%c %d  %c %d \n",a,i,b,j);
    }
}
if(e==2){
    int n;
    printf("enter ascii num:");
    scanf("%d",&n);
    char s=(char)n;
    printf("%c %d",s,n);
}
if(e!=1 && e!=2){
    printf("Envalid input!");
}
return 0;
}