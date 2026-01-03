#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    FILE* ptr;
    ptr=fopen("kuldeep.txt","r");
    char str[50];
    while(fgets(str,50,ptr)!=NULL){
        printf("%s",str);
    }
    return 0;
}