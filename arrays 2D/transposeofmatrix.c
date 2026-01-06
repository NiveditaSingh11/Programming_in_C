#include <stdio.h>
int main()
{
    int r;
    printf("enter number of rows :");
    scanf("%d", &r);
    int c;
    printf("enter number of columns :");
    scanf("%d", &c);
    printf("enter all the elements\n");
    int arr[r][c]; //  r*c  total elements
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("enter the element %d %d :", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }

    // 1 2 3
    // 4 5 6

    // 1 2
    // 3 4
    // 5 6
    printf("\n");
       int brr[c][r];
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
         
             brr[i][j] = arr[j][i];
            
        }
        printf("\n");
    }
    for (int i =0; i<c;i++){
        for (int j=0;j<r;j++){
            printf("%d  ", brr[i][j]);
        }
         printf("\n");
    }
   

    return 0;
}
