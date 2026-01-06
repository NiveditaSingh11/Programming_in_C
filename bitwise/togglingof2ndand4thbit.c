#include <stdio.h>
int main()
{
    int num;
    printf("enter the number :");
    scanf("%d", &num);
    printf("the original number is %d\n", num);
    int num1;

    num1 = num ^ 10;
    printf("after toggling the number %d", num1);

    return 0;
}