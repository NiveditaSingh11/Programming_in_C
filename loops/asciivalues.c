#include <stdio.h>
int main()
{

    // what is type casting?

    for (int i = 65; i <= 90; i++)
    {
        printf("%d ",i);
        char ch = (char)i;
        printf("%c\n", ch);

        return 0;
    }
}
// char ch = 'A';
// printf("%c\n",ch);
// int x = (int)ch;
// printf("%d\n",x);
