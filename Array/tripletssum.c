#include <stdio.h>
int main(){
    int n,x;
    printf("enter a num:");
    scanf("%d",&n);
      printf("enter a num for pair:");
    scanf("%d",&x);
    int count=0;
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter %d element:\n",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==x){
                    printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
                count++;
                }
            }
        }
    }
        printf("%d is pair of %d in this array",count,x);
    
    return 0;
}  
