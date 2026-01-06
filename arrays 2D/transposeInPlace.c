#include <stdio.h>
int main()
{
    int n;
    printf("enter number of rows and columns:");
    scanf("%d", &n);

    printf("enter all the elements\n");
    int arr[n][n]; //  n*n  total elements
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("enter the element %d %d :", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\n");

    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");


    int brr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            brr[i][j] = arr[j][i];
        }
        printf("\n");
    }



    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d  ", brr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
