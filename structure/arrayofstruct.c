#include <stdio.h>
#include <string.h>
int main(){
    typedef struct pokemon{
        char name[15];
        int hp;
        int speed;
        int attack;
        char tier;
    }pokemon;
    pokemon arr[3];
    strcpy(arr[0].name,"pikachu");
    arr[0].hp=80;
    arr[0].speed=100;
    arr[0].attack=70;
    arr[0].tier='B';

    strcpy(arr[1].name,"charizard");
    arr[1].hp=120;
    arr[1].speed=80;
    arr[1].attack=100;
    arr[1].tier='A';

    strcpy(arr[2].name,"mewtoo");
    arr[2].hp=160;
    arr[2].speed=100;
    arr[2].attack=150;
    arr[2].tier='S';

    for(int i=0;i<3;i++){
        printf("Name:%s\n",arr[i].name);
        printf("Hp:%d\n",arr[i].hp);
        printf("Speed:%d\n",arr[i].speed);
        printf("Attack:%d\n",arr[i].attack);
        printf("Tier:%c\n",arr[i].tier);
        printf("\n");
    }
    return 0;
}