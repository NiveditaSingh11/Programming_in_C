#include <stdio.h>
void decreasing(int n)
{
    if (n == 0)
        return;
    printf("%d\n", n);
    decreasing(n - 1);
    printf("%d\n", n);
    return;
}

int main()
{
    int n;
    printf("enter a number :");
    scanf("%d", &n);
    decreasing(n);
    return 0;
}
//4
//3
//2
//1
//1
//2
//3
//4