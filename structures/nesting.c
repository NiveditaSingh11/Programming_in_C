#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{

    typedef struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;

    typedef struct legendarypokemon
    {

        pokemon normal;
        char ability[100];
    } legendarypokemon;
    typedef struct godpokemon
    {
        legendarypokemon legend;
        int specialattack;
    } godpokemon;

    legendarypokemon mewtwo;

    strcpy(mewtwo.ability, "pressure");
    mewtwo.normal.hp = 150;
    mewtwo.normal.speed = 250;
    mewtwo.normal.attack = 350;
    mewtwo.normal.tier = 'S';
    strcpy(mewtwo.normal.name, "mewtwo");

    godpokemon arceus;
    arceus.specialattack = 300;
    strcpy(arceus.legend.ability, "turns anyone into stone");
    arceus.legend.normal.attack=800;
    arceus.legend.normal.speed=900;



    return 0;
}