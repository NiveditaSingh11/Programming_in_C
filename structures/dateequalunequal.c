#include <stdio.h>
#include <stdbool.h>
int main()
{
    typedef struct date
    {
        int day;
        int month;
        int year;
    } date;

    date arr[2];
    date a, b;
    // for(int i=0;i<2;i++){
    // printf("enter day:");
    // scanf("%d",&arr[i].day);
    // printf("enter month:");
    // scanf("%d",&arr[i].month);
    // printf("enter year:");
    // scanf("%d",&arr[i].year);
    //  }

    //  for(int i=0; i<2;i++){
    //  printf("%d %d %d\n" , arr[i].day, arr[i].month,arr[i].year);
    //  }


    a.day=3;
    a.month=9;
    a.year=1999;
    b .day=15;
    b.month=9;
    b.year=1999;

    bool flag=true;
    if(a.day!=b.day) flag = false;
    if(a.month!=b.month) flag = false;
    if(a.year!=b.year) flag = false;
    
    if(flag==true) printf("the dates are equal");
    else printf("the dates are different ");
    return 0;
}