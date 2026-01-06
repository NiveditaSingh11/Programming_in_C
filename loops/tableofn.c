#include <stdio.h>
int main()
{

    int n;
    printf("enter the number whose table you want :");
    scanf("%d", &n);

    for (int i = n; i <= (n * 100); i = i + n)
    {
        printf("%d\n", i);
    }
    return 0;
}