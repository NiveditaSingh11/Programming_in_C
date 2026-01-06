#include <stdio.h>
#include <string.h>
#include <stdbool.h>
typedef struct pokemon
{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[15];
} pokemon;

void change(pokemon* p){
    return ;
}
int main()
{

    pokemon pikachu;
    // pikachu.hp = 60;
    // pikachu.attack = 70;
    // pikachu.speed = 100;
    // pikachu.tier = 'A';
    // strcpy(pikachu.name, "Pikachu");
    // int *---> address of integer value
    pokemon *x = &pikachu;

    // printf("%p\n", &pikachu.hp);
    // printf("%p\n", &pikachu.attack);
    // printf("%p\n", &pikachu.speed);
    // printf("%p\n", &pikachu.tier);
    // printf("%p\n", x);

   // int x;
   // int *p = &x;
   // *p = 7; x=7


   (*x).hp = 70;
   (*x).attack=90;
   printf("%d", pikachu.hp);

    return 0;
}