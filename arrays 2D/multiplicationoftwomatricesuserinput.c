#include <Stdio.h>
int main()
{

    int r1, c1, r2, c2;
    printf("enter r1: ");
    scanf("%d", &r1);
    printf("\n");

    printf("enter c1: ");
    scanf("%d", &c1);
    printf("\n");

    printf("enter r2: ");
    scanf("%d", &r2);
    printf("\n");

    printf("enter c2: ");
    scanf("%d", &c2);
    printf("\n");

    int arr[r1][c1];
    int brr[r2][c2];
    // c1=r2 is a must condition !!

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("enter the element %d %d :", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");

    printf("enter the elements of second matrix");

    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("enter the element %d , %d :", i + 1, j + 1);
            scanf("%d ", &brr[i][j]);
        }
    }
    if (c1 != r2)
    {
        printf("the matrices can't be  multiplied");
    }

    else
    {
        int res[r1][c2];
        int cr = c1;

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                res[i][j] = 0;
                for (int k = 0; k < cr; k++)
                {
                    res[i][j] += arr[i][k] * brr[k][j];
                }
            }
        }

        printf("\n");

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("%d  ", res[i][j]);
            }
            printf("\n");
        }
    }

   
    return 0;
}