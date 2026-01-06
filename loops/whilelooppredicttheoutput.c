#include <stdio.h>
int main()
{
    // int i = 1;
    //  while (i <= 10)
    //  {
    //     printf("\n%d", i);
    //     i++;
    //  }

    // int x =1;
    // while (x==1){
    //    x=x-1;
    //    printf("\n%d",x);
    // }

    // int x=4 ,y,z;
    // y=--x;  //--x=x-1  :first decrement then use
    //  z=x--;  //x--=x-1  : first use then decrement
    //  printf("\n%d %d %d",x,y,z);

    // int x = 4, y = 3, z;
    // z = x-- - y;
    // printf("\n%d %d %d", x, y, z);

    // int i=10;
    // while (i=20)
    // printf("\nA computer buff!");//answer : infinite

    //  int i;
    //  while(i=10){
    //       printf("\n%d",i);
    //      i=i+1;
    // } infinite loop


    int x=4, y=0 , z;
    while (x>=0){
        if (x==y)
        break; 
        else
        printf("\n%d%d",x,y);
        x--;
        y++;
    }

    
    return 0;
}