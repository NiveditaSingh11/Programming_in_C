#include <stdio.h>
int main()
{
    int n;
    printf("enter number :");
    scanf("%d", &n);
    int sum = 0;

    for (int i = 1; (i <= n); i++)
    {
        int k;
        printf("enter the number:");
        scanf("%d", &k);
        sum = sum + k;
        printf("\n");
        if (k > 0)
            printf("%d ", sum);
        else
        {
            printf("stop\n");
            break;
        }
       
    }
     printf("the sum of all numbers :%d",sum);
    

    return 0;
}