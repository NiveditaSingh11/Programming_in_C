#include <stdio.h>
int main()
{

    int a;
    printf("enter the number to be checked :");
    scanf("%d", &a);
    if (a < 1)
        printf("the test is inconclusive");

    else if ((a & (a -1)) == 0) //ye sahi hai !!
    {
        printf("the number is power of two");
    }
    else
    {
        printf("the number is not power of two");
    }

    return 0;
}

//jab {(a&(a+1)) == a }kar rahe hain tab 56 , 88 aise aise numbers bhi two ka power show ho raha hai !!
//which is a technical glitch 