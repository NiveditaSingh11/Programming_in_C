#include <stdio.h>
int main()
{
    int arr[3][4] = {{1, 0, 1, 1}, {1, 1, 1, 1}, {1, 0, 0, 1}};

    int maxcount = 0;
    int maxidx=  -1;
    for (int i = 0; i < 3; i++)
    {
        int count = 0;
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == 1)
                count++;
        }
        if (maxcount < count){
            maxcount = count;
            maxidx= i;
        }
        printf("\n");
    }
        printf("%d", maxidx);
     //printf("%d\n", maxcount);
     


   
    printf("\n");
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sum += arr[i][j];
        }
    }

     
    printf("sum of matrix is %d", sum);
    return 0;
}