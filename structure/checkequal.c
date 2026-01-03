#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main(){
    typedef struct date{
        int day;
        int month;
        int year;
    }date;
    date a,b;
    a.day=2;
    a.month=10;
    a.year=2025;

    b.day=2;
    b.month=12;
    b.year=2025;

    bool flag=true;
    if(a.day!=b.day) flag=false; 
    if(a.month!=b.month) flag=false;
    if(a.year!=b.year) flag=false;

    if(flag) printf("Dates are equal");
    else printf("Dates are not equal");

    return 0;
}