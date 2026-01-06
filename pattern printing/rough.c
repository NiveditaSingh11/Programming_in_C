#include <stdio.h>
int main()
{
    int n;

    printf("enter a number:");
    scanf("%d", &n);

    int nst = n;
    int nsp = 1;

    for (int i = 1; i <= 2 * n + 1; i++)

    {
        if (i > n + 1)
            printf("%d", ((2 * n + 1) - (i - (n + 1))) / 2);
        else
            printf("%d", i);
    }
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nst; j++)
        {
            printf("%d", j);
        }
        for (int j = 1; j <= nsp; j++)
        {
            printf("#");
        }
        for (int j = 1; j <= nst; j++)
        {
            printf("%d", j);
        }

        nst--;
        nsp = nsp + 2;

        printf("\n");
    }

    return 0;
}