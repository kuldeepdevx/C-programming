#include <stdio.h>
int main(){
    char str[]="kuldeep";
    int i=0;
    int size=0;
    while(str[i]!='\0'){
        size++;
        i++;
    }
    char str1[size+1];
    for(int i=0,j=size-1;i<size;i++,j--){
        str1[i]=str[j];
    }
    str1[size]='\0';
    puts(str);
    puts(str1);
    return 0;
}
