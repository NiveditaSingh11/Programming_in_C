#include <stdio.h>
int main()
{
    int n; // odd rahna chahiye n ko !!
    printf("enter a number:");
    scanf("%d", &n);
    int nsp = ((n + 1) / 2) - 1;
    int nst = 1;
    int ml = (n + 1) / 2;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nsp; j++) // spaces
        {
            printf("#");
        }
        for (int k = 1; k <= nst; k++) // stars
        {
            printf("*");
        }
        if (i < ml)
        {
            nsp--;
            nst += 2;
        }

        else
        {
            nsp++;
            nst -= 2;
        }
        printf("\n");
    }

    return 0;
}
// a+=5----> a+5
// a*=5---->a*5
// mjo!!