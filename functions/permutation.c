#include <stdio.h>
int factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int n;
    printf("enter n  :");
    scanf("%d", &n);
    int r;
    printf("enter r :");
    scanf("%d", &r);

    int nfact = factorial(n);
    int nrfact = factorial(n - r);

    int permutation = nfact / nrfact;

    //or int permutation = factorial (n)/factorial (n-r);
    printf("%d", permutation);

    return 0;
}