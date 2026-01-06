#include <stdio.h>
int main()
{
    int r;
    printf("enter rows:");
    scanf("%d", &r);
    int c;
    printf("enter columns:");
    scanf("%d", &c);
    int arr[r][c];
     int brr[r][c];
     int sum[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("enter element %d  %d :", i , j );
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
   
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("enter element %d  %d :", i , j );
            scanf("%d", &brr[i][j]);
        }
    }
   
for (int i =0;i<r;i++){
    for (int j =0 ; j<c;j++){
        sum[i][j] = arr[i][j] + brr[i][j];

    }
}  
for (int i =0;i<r;i++){
    for (int j =0 ; j<c;j++){
 printf("%d ",sum[i][j]);
    }
    printf("\n");
}      

    return 0;
}


