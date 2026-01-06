#include <stdio.h>
int main()
{

    int low, high;
    printf("enter the lower limit :");
    scanf("%d", &low);
    printf("enter the higher limit :");
    scanf("%d", &high);

    for (int i = low + !(low % 2); i < high; i++)
    {
        if (i%2==0)  printf("%d\n",i);
       
    }

    return 0;
}