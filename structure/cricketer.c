#include <stdio.h>
#include <string.h>
int main(){
    typedef struct cricketer{
        char name[15];
        int age;
        int match;
        float average;
    }cricketer;

    cricketer info[20];
    for(int i=0;i<2;i++){
    printf("Enter %d cricketer name:",i+1);
    scanf(" %[^\n]s",info[i].name);
    printf("Enter his age:");
    scanf("%d",&info[i].age);
    printf("Enter matches he played:");
    scanf("%d",&info[i].match);
    printf("Enter his test average:");
    scanf("%f",&info[i].average);
    printf("\n");
    }
    printf("\n");
    for(int i=0;i<2;i++){
    printf("Name:%s\n",info[i].name);
    printf("Age:%d\n",info[i].age);
    printf("Matches he played:%d\n",info[i].match);
    printf("Test average:%f\n",info[i].average);
    printf("\n");
    }
    return 0;
}