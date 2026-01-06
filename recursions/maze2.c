#include <stdio.h>
int maze2(int n, int m)
{
    int rightways  = 0; 
    int downways =0;
    if (n==1 && m==1) return 1;
    if (n==1 ){
        rightways += maze2(n, m-1);

    }
    if (m==1){
        downways += maze2(n-1 ,m);
    }
    if (n>1 && m>1){
        rightways += maze2(n, m-1); 
        downways += maze2(n-1 ,m);
    }
       int totalways= rightways + downways ;
}
int main()
{
    int n; // number of rows
    printf("enter number of rows of maze:");
    scanf("%d", &n);
    int m; // number of column
    printf("enter number of columns of maze:");
    scanf("%d", &m);
    int numberofways = maze2( n, m);
    printf("%d", numberofways);
    return 0;
}
