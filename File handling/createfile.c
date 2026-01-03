// #include <Stdio.h>
// int main(){
//     FILE* ptr=fopen("java.txt","w");
//     char str[]="data is clear or not";
//     fputs(str,ptr);
//     fclose(ptr);
//     return 0;
// }

 
#include <Stdio.h>
int main(){
    FILE* ptr=fopen("java.txt","a");
    char str[]="data is clear or not";
    fputs(str,ptr);
    fclose(ptr);
    return 0;
}