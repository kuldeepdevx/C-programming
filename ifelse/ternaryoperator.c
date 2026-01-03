#include <stdio.h>
#include <string.h>
int main(){
//     int n;
//     printf("enter a num:");
//     scanf("%d",&n);
//     // (n%2)==0?printf("even num"):printf("odd num");
//     char *result[]={"even","odd"};
//     printf("%s",result[n%2==0?0:1]);
//     return 0;
// }
char password[]="kuldeep";
char* arr[10];
do{
 printf("Enter password:");
 scanf(" %s",arr);

}while(strcmp(arr,password)!=0);
printf("password is right");
return 0;
}