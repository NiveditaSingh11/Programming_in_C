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
        for (int j = 1; j <= m; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    // or

    // for (int i = 1; i <= n; i++)
    //  {
    //   int a=1;
    //   for (int j=1; j <= m; j++)
    //  {
    //      printf("%d", a);
    //      a++;
    //  }

    //  printf("\n");
    // }

    return 0;
}
