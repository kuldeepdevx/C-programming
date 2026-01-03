// #include <stdio.h>
// int main(){
//    int* x;
//    int a=1;
//    x=&a;
//     printf("%p\n",x);
//     printf("%p",&a);
//     return 0;
// }


#include <stdio.h>
int main(){
   int* x;
   int a=10,b=2;
   x=&a;
   int** y=&x;
   *y=&b;
    printf("%d\n",*x);
    printf("%d",**y);
    return 0;
}

