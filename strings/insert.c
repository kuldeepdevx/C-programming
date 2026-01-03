#include <stdio.h>
#include <string.h>
int main(){
    char str[50];
    gets(str);
    int x=strlen(str);
    char n;
    int ind;
    printf("enter what to insert:");
    scanf(" %c",&n);
    printf("ente where to insert which indces:");
    scanf("%d",&ind);
    for(int i=x;i>=ind-1;i--){
        str[i+1]=str[i];
    }
    str[ind-1]=n;
    puts(str);
    return 0;
}