#include <stdio.h>
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d", &n);
    int nst = n;
    int nsp = 1;

    // ABCDEFG
    // ABC#EFG
    // AB###FG
    // A#####G
    int a = 1;
    for (int i = 1; i <= 2 * n + 1; i++)
    {
        int d = a + 64;
        char ch = (char)d;
        printf("%c", d);
        a++;
    }
    printf("\n");

    for (int i = 1; i <= n; i++)
    {
        int e = 1;
        for (int j = 1; j <= nst; j++)
        {
            int f = e + 64;
            char ch = (char)f;
            printf("%c", f);
            e++;
        }

        for (int k = 1; k <= nsp; k++)
        {
            printf("#");
            e++;
        }
        for (int l = 1; l <= nst; l++)
        {
            int f = e + 64;
            char ch = (char)f;
            printf("%c", f);
            e++;
        }

        nst--;
        nsp += 2;
        printf("\n");
    }

    return 0;
}