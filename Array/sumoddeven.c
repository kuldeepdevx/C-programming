#include <Stdio.h>
int main(){
    int n;
    printf("enter a num:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter %d element:\n",i+1);
        scanf("%d",&arr[i]);
    }
    int odd=0;
    int even=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            even+=arr[i];
        }
        else{
            odd+=arr[i];
        }
    }
    int ans;
    if(odd>=even) ans=odd-even;
    else ans=even-odd;
    printf("diff of even index &odd index elements is %d",ans);
    return 0;
}