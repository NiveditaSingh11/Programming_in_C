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

    int arr[r1][c1];
    
    // c1=r2 is a must condition !!

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("enter the element %d %d :", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i =0 ; i<r1;i++){
        if (i%2==0){
              for(int j=0;j<c1;j++){
                printf( "%d",arr[i][j]);
        }
        }
        else {
             for(int j=c1-1;j>=0;j--){
                printf( "%d",arr[i][j]);
        }
        }
        printf("\n");
      
    }
    return 0;
}