#include <stdio.h>
int factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int combination(int n, int r)
{
    int ncr = factorial(n) / (factorial(r) * factorial(n - r));
    return ncr;
}
int main()
{

    int b;
    printf("enter number:");
    scanf("%d", &b);

    for (int i = 0; i <= b; i++) // for n
    {
        for (int k = 1; k <= b - i; k++)
        {
            printf("#");
        }

        for (int j = 0; j <= i; j++)
        { // for r
            int icj = combination(i, j);
            printf("%d  ", icj);
        }

        printf("\n");
    }

    return 0;
}
//mjo!!