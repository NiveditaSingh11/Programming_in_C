#include <stdio.h>
#include <string.h>
int main()
{

    typedef struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char name[15];
    } pokemon;

    pokemon arr[2];

    arr[0].attack = 50;
    arr[0].hp = 80;
    arr[0].speed = 30;
    strcpy(arr[0].name, "charizard");

    arr[1].attack = 50;
    arr[1].hp = 80;
    arr[1].speed = 30;
    strcpy(arr[1].name, "pikachu");

    for (int i = 0; i < 2; i++)
    {
        printf("name :%s\n", arr[i].name);
        printf("attack :%d\n", arr[i].attack);
        printf("hp :%d\n", arr[i].hp);
        printf("speed :%d\n", arr[i].speed);
    }

    return 0;
}