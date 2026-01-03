// #include <Stdio.h>
// #include <Limits.h>
// int main(){
//     int n;
//     printf("enter a num:");
//     scanf("%d",&n);
//     int arr[n];
//      for(int i=0;i<n;i++){
//         printf("enter %d element:\n",i+1);
//         scanf("%d",&arr[i]);
//     }
//     int max=INT_MIN;
//     int smax=INT_MIN;
//     for(int i=0;i<n;i++){
//         if(max<arr[i]){
//             max=arr[i];
//         }
//     }
// for(int i=0;i<n;i++){
//     if(arr[i]!=max && smax<arr[i]){
//        smax=arr[i];
// }
// }
//        printf("%d",smax);
//     return 0;
// }


#include <Stdio.h>
#include <Limits.h>
int main(){
    int n;
    printf("enter a num:");
    scanf("%d",&n);
    int arr[n];
     for(int i=0;i<n;i++){
        printf("enter %d element:\n",i+1);
        scanf("%d",&arr[i]);
    }
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i];
        }
        else if(smax<arr[i] && max!=arr[i]){
            smax=arr[i];
        }
    }
       printf("%d",smax);
    return 0;
}