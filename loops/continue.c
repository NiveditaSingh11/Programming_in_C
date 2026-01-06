#include <stdio.h>
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            continue; // skip kro uss round ko!!
        }
        printf("%d\n", i);
    }
    // for(int i ; i<=100;i++){
    // if(i%2!=0){
    //    printf("%d",i)
    //}
    //}
    return 0;
}