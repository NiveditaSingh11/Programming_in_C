#include <stdio.h>
int main()
{
    int a = 1;
    int b = 1;
    int sum = 1;
    int n;
    printf("enter the number of terms:");
    scanf("%d", &n);

    for (int i = 0; i <n; i++)
    {
        printf("%d  ", a);
        sum = a + b;
        a = b;
        b = sum;
          
    }
  

    return 0;
}