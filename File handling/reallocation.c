#include<stdio.h>
#include <stdlib.h>
int main(){
    int* ptr=(int*)calloc(2,sizeof(int));
    ptr=realloc(ptr,5*sizeof(int));
    return 0;
}