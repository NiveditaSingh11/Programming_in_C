#include <stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d", &n);

    int a;
    for (int i; i <= n; i++)
    {
        if (n % 2 == 0)
        {
            a = -n / 2;
        }
        else
        {
            a = -(n/2)+n;//otherwise (n+1)/2
        }
    }
    printf("%d", a);
    return 0;
}