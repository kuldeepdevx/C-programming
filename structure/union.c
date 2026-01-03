#include <stdio.h>
#include <string.h>
int main(){
    typedef union pokemon{
        int hp;
        int attack;
        int speed;
    }pokemon;
    
    pokemon p;
    p.hp=110;
    p.attack=100;
    p.speed=80;
    printf("%d\n",p.hp);
    printf("%d\n",p.attack);
    printf("%d",p.speed);
    return 0;
}