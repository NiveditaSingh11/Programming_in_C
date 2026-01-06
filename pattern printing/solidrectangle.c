#include <stdio.h>
int main()
{
    int n;
    printf("enter length :");
    scanf("%d", &n);
    int m;
    printf("enter breadth :");
    scanf("%d", &m);

    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <= m; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}