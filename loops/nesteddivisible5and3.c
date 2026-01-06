#include <stdio.h>
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d", &n);
    if (n % 5 == 0)
    {
        if (n % 3 == 0)
        {
            printf("number is divisible by 5 and 3");
        }
        else
        {
            printf("not divisible");
        }
    }
    else
    {
        printf("not divisible");
    }

    return 0;
}