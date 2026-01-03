//  #include <stdio.h>
//  int main(){
//  int n;
//     printf("enter a num:");
//     scanf("%d",&n);
//     int s=0;
// for(int i=1;i<=n;i++){
//     if(i%2==0){
//         s-=i;
//     }
//     else if(i%2!=0){
//         s+=i;
//     }
// }
// printf("the sum of series is %d",s);
//     return 0;
// }


 #include <stdio.h>
 int main(){
 int n;
    printf("enter a num:");
    scanf("%d",&n);
    int s=0;
for(int i=1;i<=n;i++){
if(i==1){
    printf("%d",i);
}
   else if(i%2!=0){
        printf("+%d",i);
    }
    else if(i%2==0){
    printf("-%d",i);
    }
}
    return 0;
}