#include <stdio.h>
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d", &n);
    // 1-2+3-4......=
    // odd numbers add ho rahe hain
    // even numbers subtract ho rahe hain!
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
        else
        {
            sum = sum - i;
        }
    }
    printf("%d", sum);

    return 0;
}