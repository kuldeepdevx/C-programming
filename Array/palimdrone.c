#include <stdio.h>
int main(){
    int n;
    printf("enter a num:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter %d element:\n",i+1);
        scanf("%d",&arr[i]);
       }
       int i=0;
       int j=n-1;
       int a=1;
       while(i<j){
        if(arr[i]!=arr[j]){
            a=0;
            break;
        }
            i++;
            j--;        
       }
       if(a) printf("yes it is");
        else printf("it is not");
            return 0;
        }

