// #include <stdio.h>
// int main(){
//     int arr[9]={0,0,3,2,1,0,0,5,3};
//     int brr[9];
//     int a=0;
//     for(int i=0;i<9;i++){
//         if(arr[i]!=0){
//             brr[a]=arr[i];
//             a++;
//         }
//     }
//     for(int i=a;i<9;i++){
//         brr[i]=0;
//     }
//     for(int i=0;i<9;i++){
//         printf("%d ",brr[i]);
//     }
//     return 0;
// }



#include <stdio.h>
int main(){
    int arr[9]={0,0,3,2,1,0,0,5,3};
    // int temp;
    // int a=0;
    // for(int i=0;i<9;i++){
    //     for(int j=0;j<9;j++){
    //     while(arr[j]==0){
    //         temp;
    //     }
    // }

    int a = 0;
for (int i = 0; i < 9; i++) {
    if (arr[i] != 0) {
        arr[a++] = arr[i];
    }
}
while (a < 9) {
    arr[a++] = 0;
}

    for(int i=0;i<9;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}