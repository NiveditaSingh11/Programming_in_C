#include <Stdio.h>
int main()
{

    int r1, c1;
    printf("enter r1: ");
    scanf("%d", &r1);
    printf("\n");

    printf("enter c1: ");
    scanf("%d", &c1);
    printf("\n");

    int arr[r1][c1];

    // spiral print !!

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("enter the element %d %d :", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    int minr = 0;
    int maxr = r1 - 1;
    int minc = 0;
    int maxc = c1 - 1;
    int tne = r1 * c1;
    int count = 0;

    while (count < tne)
    {
        // print the minimum row
        for (int j = minc; j <= maxc; j++)
        {
            printf("%d  ", arr[minr][j]);
            count++;
        }
        minr++;
        if (count >= tne)
            break;
        // print the maximum column
        for (int i = minr; i <= maxr; i++)
        {
            printf("%d  ", arr[i][maxc]);
            count++;
        }
        maxc--;
        if (count >= tne)
            break;

        // print the maximum row in reverse order
        for (int j = maxc; j >= minc; j--)
        {
            printf("%d  ", arr[maxr][j]);
            count++;
        }
        maxr--;
        if (count >= tne)
            break;

        // print the minimum column in reverse order
        for (int i = maxr; i >= minr; i--)
        {
            printf("%d  ", arr[i][minc]);
            count++;
        }
        minc++;
        if (count >= tne)
            break;
    }

    return 0;
}