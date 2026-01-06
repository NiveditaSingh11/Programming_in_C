#include <stdio.h>
int main()
{
    int n;
    printf("enter a length:");
    scanf("%d", &n);
    int m;
    printf("enter a breadth:");
    scanf("%d", &m);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * m - 1; j = j + 2)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
//mjo!!