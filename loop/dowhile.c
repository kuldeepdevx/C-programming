// #include <stdio.h>
// int main(){
//     int x=1;
//     do{
//         printf("hello ");
//         x++;
//     }while(x<10);
//     return 0;
// }



#include <stdio.h>
int main(){
    int y=0;
        int n;
    int x=1;
    do{
        printf("enter password:");
        scanf("%d",&n);
        if(n==1234){
            y=1;
        }
        else{
            y=0;
        }
        x++;
    }while(y==0);
    printf("axcess granted");
    return 0;
}