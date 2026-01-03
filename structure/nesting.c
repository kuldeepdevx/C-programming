#include <stdio.h>
#include <string.h>
int main(){
typedef struct pokemon{
    char name[50];
    int hp;
    int attack;
    int speed;
    char tier;
}pokemon;

typedef struct legendarypokemon{
char ability[50];
pokemon normal;
}legendarypokemon;

typedef struct godpokemon{
    int specialattack;
    legendarypokemon legend;
}godpokemon;

godpokemon arceus;
strcpy(arceus.legend.normal.name,"Arceus");
arceus.legend.normal.hp=100;
arceus.specialattack=500;
strcpy(arceus.legend.ability,"turn anyone to stone");

printf("%s",arceus.legend.normal.name);
return 0;
}