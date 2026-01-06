#include <stdio.h>
int maze(int cr, int cc, int er, int ec)
{
    int rightways = 0;
    int downways = 0;
    if (cr == er && cc == ec)
    {
        return 1;
    }
    if (cr == er)
    { // only rightways calls
        rightways += maze(cr, cc + 1, er, ec);
    }
    if (cc == ec)
    { // only downwards calls
        downways += maze(cr + 1, cc, er, ec);
    }
    if (cr < er && cc < ec)
    {
        rightways = maze(cr, cc + 1, er, ec);
        downways = maze(cr + 1, cc, er, ec);
    }

    int totalway = rightways + downways;
    return totalway;
}
int main()
{
    int n; // number of rows
    printf("enter number of rows of maze:");
    scanf("%d", &n);
    int m; // number of column
    printf("enter number of columns of maze:");
    scanf("%d", &m);
    int numberofways = maze(1, 1, n, m);
    printf("%d", numberofways);
    return 0;
}
// cr current row
// cc current column
// er ending row