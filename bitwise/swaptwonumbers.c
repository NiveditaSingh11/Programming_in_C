#include <stdio.h>
int main()
{
    int a, b;
    printf("enter the first number :");
    scanf("%d", &a);
    printf("enter the second number :");
    scanf("%d", &b);
    printf("%d %d\n", a, b);
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;

    printf("%d %d ", a, b);

    return 0;
}
