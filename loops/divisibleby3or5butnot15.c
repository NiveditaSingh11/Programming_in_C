#include <stdio.h>
int main()
{
    int n;
    printf("enter the number :");
    scanf("%d", &n);
    // if (n % 5 == 0 || n % 3 == 0)
    // {
    //    if (n % 15 != 0)
    //    {
    //        printf("the number is divisible by 3 or 5 but not 15");
    //  }

    //  else
    //   {
    //      printf("the number is divisible by 15");
    //  }
    // }

    if ((n%5==0 || n%3==0) && n%15!=0){
        printf("the number is divisible by 3 or 5 but not 15");
   
    }

     else
    {
       printf(" divisible by 15");
     }

    return 0;
}