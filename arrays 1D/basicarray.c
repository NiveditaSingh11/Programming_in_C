#include <stdio.h>
int main()
{
    // int arr[4];
    // printf("enter first element:");
    // scanf("%d", &arr[0]);
    // printf("enter second element:");
    // scanf("%d", &arr[1]);
    // printf("enter third element:");
    // scanf("%d", &arr[2]);
    // printf("enter fourth  element:");
    // scanf("%d", &arr[3]);
    // printf("%d", arr[3]);

    // int arr [5] = {2, 4, 6, 8, 10};
    // arr[4] =100; //{2, 4, 6 ,8 ,100} value update ho jayega !!
    // arr[1]= 1; // 2,1 , 6,8,100
    // printf("%d", arr [18]); //garbage value deta hai !!

    // float arr[3] = { 1.4 , 4.7 , 6.9999};
    // printf ( "%f", arr  [2]);

    // char arr[4] = { 'a ', 'f ','t','u' , 'i'};
    // printf("%c",arr [2]);

    int arr[5] ;
    for (int i = 0; i <= 4; i++)
    {
       
        printf("enter element number \n%d :",i+1);
       scanf("%d", &arr[i]);
    }

    printf( "%d", arr[2]);
    return 0;
}
