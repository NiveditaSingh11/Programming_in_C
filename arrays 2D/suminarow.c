#include <stdio.h>
#include <limits.h>

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
     for (int i = 0; i < r; i++)
    {
        int sum = 0;
        for (int j = 0; j < c; j++)
        {
           sum += arr[i][j]; 
        }
        printf("%d" , sum );
        printf("\n");


       
    }

    int max = INT_MIN;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (max < arr[i][j])
            {
                max= arr[i][j];
            }
        }
    }

    printf("the maximun element is %d  ", max);



    return 0;
}