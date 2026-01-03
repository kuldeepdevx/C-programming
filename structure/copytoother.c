#include <stdio.h>
#include <string.h>
int main(){
    typedef struct person{
        char name[50];
        int age;
        int salary;
    }person;
    person kuldeep,rameshwar;

    strcpy(kuldeep.name,"Kuldeep Rajput");
    kuldeep.age=19;
    kuldeep.salary=390000;

    rameshwar=kuldeep;
    strcpy(rameshwar.name,"Rameshwar Rajput");

    printf("%d",rameshwar.salary);
    return 0;
}