#include <stdio.h>
int main()
{
    int arr[7] = {1, 3, 4, 9, 5, 8, 7};
    for (int i = 0; i <= 6; i++)
    {
        if (i % 2 != 0)
        {
            arr[i] = arr[i] * 2;
        }
        else
        {
            arr[i] = 10 + arr[i];
        }
    }

    for (int i = 0; i <= 6; i++)
    {
        printf("%d   ", arr[i]);
    }
    return 0;
}