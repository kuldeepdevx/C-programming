#include <stdio.h>
#include <string.h>
int main(){
    struct person{
        char name[50];
        int age;
        int salary;
    };
    struct person kuldeep;
    strcpy(kuldeep.name,"Kuldeep Rajput");
    kuldeep.age=19;
    kuldeep.salary=390000;

    struct person rameshwar;
    strcpy(rameshwar.name,"Rameshwar Rajput");
    rameshwar.age=19;
    rameshwar.salary=300000;

    printf("%s",kuldeep.name);
     printf("\n%d",rameshwar.age);

    return 0;
}