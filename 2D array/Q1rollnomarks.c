#include <stdio.h>
int main(){
    int t;
    printf("enter how many studnets:");
    scanf("%d",&t);
    int arr[t][4];
for(int i=0;i<t;i++){
    for(int j=0;j<4;j++){
    printf("enter roll no of %d student:",i+1);
    scanf("%d",&arr[i][j]);
    j++;
    printf("enter marks of maths:");
    scanf("%d",&arr[i][j]);
    j++;
     printf("enter marks of physics:");
    scanf("%d",&arr[i][j]);
    j++;
     printf("enter marks of chemistry:");
    scanf("%d",&arr[i][j]);
    
    }
}
for(int p=0;p<t;p++){
    for(int i=0;i<4;i++){
    printf("%d ",arr[p][i]);
    }
    printf("\n");
}
    return 0;
}


