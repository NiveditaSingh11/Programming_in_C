#include <stdio.h>
int main()
{

    int a, b;
    printf("enter the number :");
    scanf("%d", &a);

    // b=a<<31;
    // b =0 ?3:2;
    // if(b=3) printf("the number is odd  " );
    // else printf("the number is even ");

    if (b = a & 1)
    {
        printf("the number is odd ");
    }
    else
    {
        printf("the number is even");
    }

    return 0;
}