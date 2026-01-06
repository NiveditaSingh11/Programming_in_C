#include <stdio.h>
int main()
{
    int n;
    printf("enter the n :");
    scanf("%d", &n);
    //  int m ;
    // printf("enter the m :");
    // scanf("%d",&m);
    int ml = (n + 1) / 2;
    int i;
    for (i = 1; i <= n; i++)
    {
        for (int j = 1; j <= ml - i; j++)
        {
            printf("#  ");
        }

        if (i <= ml)
        {
            for (int j = 1; j <= 2 * i - 1; j++)
            {
                printf("*  ");
            }
            printf("\n");
        }
        else
        {
            for (int k = 1; k <= i - ml; k++)
            {
                printf("#  ");
            }
            for (int l = 1; l <= n - 2*(i - ml); l++)
            {
                printf("*  ");
            }

            printf("\n");
        }
    }
        return 0;
    }