#include <stdio.h>
#include <string.h>

 typedef struct pokemon{
        int hp;
        int speed;
        char tier;
        char name[15];
    }pokemon;

void change(pokemon* p){
    // (*p).hp=70;
    p->hp=100;
    p->speed=110;
    p->tier='A';
    strcpy(p->name,"Raichu");
    return;
}

int main(){

    pokemon pikachu;
    pikachu.hp=80;
    pikachu.speed=100;
    pikachu.tier='B';
    strcpy(pikachu.name,"Pikachu");

    printf("%s\n",pikachu.name);
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.speed);
    printf("%c\n\n",pikachu.tier);

    pokemon *p=&pikachu;
    // chnage(p);
    change(&pikachu);
    printf("%s\n",pikachu.name);
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);

    return 0;
}