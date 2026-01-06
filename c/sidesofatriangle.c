#include <stdio.h>
int main()
{

    int a;
    printf("enter a :");
    scanf("%d", &a);

    int b;
    printf("enter b:");
    scanf("%d", &b);

    int c;
    printf("enter c:");
    scanf("%d", &c);

    if ((a + b) > c && (b + c) > a && (c + a) > b)
    {
        printf("sides of a triangle");
    }

    else
    {
        printf("not the sides of triangle");
    }

    return 0;
}