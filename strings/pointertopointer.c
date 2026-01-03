#include <stdio.h>
#include <string.h>
int main(){
    char arr[40]="kuldeep";
    char *str=arr;
    char **str1=&str;
    printf("%s",*str1);
    return 0;
}