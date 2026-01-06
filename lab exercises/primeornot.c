#include <stdio.h>
int main()
{
    int n;
    printf("enter the number :");
    scanf("%d", &n);

    int a = 1;
    int i = 2;
    while (i < n)
    {
        if (n % i == 0)
        {
            a = 0;
           
            break;
        }
         i++;
    }
    if (n == 1)
        printf("neither prime nor composite");

     if (a == 1)
    {
        printf("prime number ");
    }
    else
    {
        printf("composite number");
    }
    return 0;
}