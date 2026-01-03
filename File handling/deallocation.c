#include<stdio.h>
#include<stdlib.h>
int main(){
    int* ptr=(int*)malloc(2*sizeof(int));
    int* p=ptr;
    ptr++;
    free(p);
    return 0;
}