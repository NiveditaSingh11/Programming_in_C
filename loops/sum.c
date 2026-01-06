#include <stdio.h>
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d", &n);
    // 1+2+3+4......= (n+1)*n/2
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("%d", sum);

    return 0;
}