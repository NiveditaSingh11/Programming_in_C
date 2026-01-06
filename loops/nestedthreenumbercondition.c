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
    { // b sabse bada nhi ho sakta
        if (a > c)
        {
            printf("a greatest");
        }
        else
        { // c>a>b
            printf("c greatest");
        }
    }
    else
    { // a sabse bada nhi ho sakta b>a
        if (b > c)
        {
            printf("b greatest");
        }
        else
        { // c>b>a
            printf("c greatest");
        }
    }

    return 0;
}