#include <stdio.h>
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= i; j++)
        {
            // agar int a =1 ; yahan hota toh A ka triangle form karta kyunki jaisi hi last statement se a ka value 2 update hota aur fir loop chalta toh a ka value fir se 1 update ho jata !!
            int d = a + 64;
            char ch = (char)d;
            printf("%c", ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}