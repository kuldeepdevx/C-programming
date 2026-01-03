#include <stdio.h>
int main(){
    int n;
    printf("enter name length:");
    scanf("%d",&n);
    char arr[n];
    for(int i=0;i<n;i++){
    printf("enter %d letter:",i+1);
    scanf(" %c",&arr[i]);
    }
    for(int i=0;i<n;i++){
    printf("%c",arr[i]);
    }
    return 0;
}