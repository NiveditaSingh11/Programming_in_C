#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, g;
    printf("enter the first number : ");
    scanf("%d",&a);
    printf("enter the second number : ");
    scanf("%d",&b);

    c = a & b;
    d = a | b;
    e = a ^ b;
    f = a << 2;
    g = b >> 2;

    printf("bitwise AND gives :%d\n", c);
    printf("bitwise OR gives :%d\n", d);
    printf("bitwise XOR gives :%d\n", e);
    printf("bitwise left shift gives :%d\n", f);
    printf("bitwise right shift gives :%d\n", g);

    return 0;
}