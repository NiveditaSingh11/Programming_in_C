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

    if (a > b)
    {
        if (a > c)
        {
            printf("a is greatest");
        }
    }

    if (b > a)
    {
        if (b > c)
        {
            printf("b is greatest");
        }
    }

    if (c > a)
    {
        if (c > b)
        {
            printf("c is greatest");
        }
    }

    return 0;
}