#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("enter a num:");
    scanf("%d",&n);
    int* arr=(int*)malloc(n*sizeof(int));
    int* ptr=arr;
    for(int i=0;i<n;i++){
        printf("enter %d element: ",i+1);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",*ptr++);
    }
    printf("\n%d",*--ptr);
     printf("\n%p",ptr);
    free(ptr);
    ptr=NULL;
    printf("\n%p",ptr);
    return 0;
}