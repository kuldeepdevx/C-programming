#include <stdio.h>
#include <string.h>

typedef struct student{
    int roll_no;
    char name[50];
    char department[50];
    int year;
}student;

int check(student *a,student *b){
    int result=strcmp(a->department,b->department);
    return result;
}
int main(){

    student a;
    a.roll_no=51;
    strcpy(a.name,"kuldeep");
    strcpy(a.department,"Eletronics and computer");
    a.year=2024;

    student b;
    b.roll_no=1;
    strcpy(b.name,"Rameshwar");
    strcpy(b.department,"Eletronics and computer");
    b.year=2024;

    int ans=check(&a,&b);

if(!ans) printf("Same Departmet");
else printf("Different Department");
return 0;
}