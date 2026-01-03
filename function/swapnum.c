// #include <stdio.h>
// int main(){
//     int a,b;
//     printf("enter first num:");
//     scanf("%d",&a);
//      printf("enter second num:");
//     scanf("%d",&b);
//     a+=b;
//     b=a-b;
//     a=a-b;
//     printf("a=%d b=%d",a,b);

//     return 0;
// }

#include <stdio.h>
int swap(int* x, int* y){
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
    return 0;
}
int main(){
    int a,b;
    printf("enter first num:");
    scanf("%d",&a);
     printf("enter second num:");
    scanf("%d",&b);
    int* x=&a;
    int* y=&b;
    swap(x,y);
    printf("a=%d b=%d",a,b);

    return 0;
}