// Time complexity=O(n);

#include <stdio.h>
int main(){
    int target=8;
    int arr[8]={1,2,3,4,5,8,9,10};
    int i=0,j=7;
    while(i<j){
        if(arr[i]+arr[j]==target){
            printf("%d,%d is pair",arr[i],arr[j]);
            break;
        }
        else{
            if(arr[i]+arr[j]<target) i++;
            else j--;
        }
    }
    return 0;
}