#include <stdio.h>
int main()
{
    int a = 5;
    int *x = &a; // for storing addresses of int  !!
    // VVIP---->   *x=7; // a is changed!!
    int **y = &x;       // int ** --> int * ka address store karta hai
    int ***z = &y;
    printf("%d\n",a);
    printf("%d\n", *x); //%p se address print hota hai !!
    printf("%d\n", **y);
     printf("%d\n", ***z);
    return 0;
}