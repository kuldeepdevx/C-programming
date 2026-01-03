#include <stdio.h>
int main(){
    int n;
    printf("enter a num:");
    scanf("%d",&n);
    int arr[n];
    int visited [n];
    for(int i=0;i<n;i++){
        printf("enter %d element:\n",i+1);
        scanf("%d",&arr[i]);
        visited[i]=0;
    }
    int found=0;
    for(int i=0;i<n;i++){
        if(visited [i])  continue;
       int a=1;
        for(int j=i+1;j<n;j++){
            if(i!=j && arr[i]==arr[j]){
                a=0;
                visited[j]=1;
              break;
        }
    } 
    if(a){
        printf("%d is unique num\n",arr[i]);
        found=1;
    }
}
    if(!found) printf("not unique");
    return 0;
}  
