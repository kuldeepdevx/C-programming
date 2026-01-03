#include <stdio.h>
int main(){
    int n;
    printf("enter num of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            char ch=(char)j;
            printf("%c",ch+64);
        }
        printf("\n");
    }
return 0;
}




// #include <stdio.h>
// int main(){
//     int n;
//     printf("enter a num:");
//     scanf("%d",&n);
//     int i=1;
//     while(i<=n){
//         int k=1;
//         while(k<=n-i){
//             printf(" ");
//             k++;
//         }
//         int j=1;
//         while(j<=i){
//             printf("%c",j+64);
//             j++;
//         }
//         i++;
//         printf("\n");
//     }
// return 0;
// }