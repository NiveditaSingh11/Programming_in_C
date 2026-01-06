#include <stdio.h>
int main()
{

    int a;
    printf("enter a:");
    scanf("%d", &a);

    int b;
    printf("enter b :");
    scanf("%d", &b);

    int c;
    printf("enter c:");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("a is greatest");
    }

    if (b > a && b > c)
    {
        printf("b is greatest");
    }

    if (c > b && c > a)
    {
        printf("c is greatest");
    }

    return 0;
}