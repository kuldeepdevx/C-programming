#include <stdio.h>
int main(){
    struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
    }pikachu;

    pikachu.hp=60;
    pikachu.attack=60;
    pikachu.speed=100;
    pikachu.tier='A';
    
    struct pokemon charizard;
    charizard.hp=100;
    charizard.attack=130;
    charizard.speed=80;
    charizard.tier='S';

    return 0;
}
















