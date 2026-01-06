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
        for (int j = i; j < n; j++)
        {
            // swap arr[i][j] and arr[j][i]
            // transpose
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
        printf("\n");
    }
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }

    // rotation

    for (int i = 0; i < n; i++)
    {
        int j = 0;
        int k = n - 1;
        while (j < k)
        {
            // swap arr[i][j] and arr[i][k]
            int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
            j++;
            k--;
        }
    }

    // output
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
