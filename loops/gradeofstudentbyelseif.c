#include <stdio.h>
int main()
{
    int n;
    printf("enter percentage :");
    scanf("%d", &n);

    // more than 80 -> a
    // more than 60->b
    // more than 40 ->c
    // less than 40 ->d

    if (n > 80)
    {
        printf("a grade");
    }

    else if (n > 60)
    {
        printf("b grade ");
    }

    else if (n > 40)
    {
        printf("c grade");
    }

    else
    {
        printf("d grade");
    }

    return 0;
}