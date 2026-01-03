#include <stdio.h>
#include <string.h>
typedef struct pokemon{
    int hp;
    int speed;
    int attack;
}pokemon;
void change(pokemon p){
    p.hp=10;
    p.attack=12;
    p.speed=15;
    return;
}
void greet(pokemon p){
    printf("%d ",p.hp);
    return;
}
int main(){
pokemon pikachu;
pikachu.hp=60;
pikachu.speed=100;
pikachu.attack=80;
change(pikachu);
greet(pikachu);
printf("%d",pikachu.hp);
return 0;
}