#include <stdio.h>
int main()
{
    int n;
    printf("enter the number whose table is to be printed:");
    scanf("%d", &n);
    int m;
    printf("enter the number of times :");
    scanf("%d", &m);
    int multiply = 0;
    for (int i = 1; i <= m; i++)
    {
        multiply= multiply +n;
        printf("%d\n", multiply);
    }
    
    return 0;
}