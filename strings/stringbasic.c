#include <stdio.h>
int main()
{
    int a[4] = {1, 2, 3, 4};

    // printf("%p\n", &a[0]);
    // printf("%p\n", &a[1]);
    // printf("%p\n", &a[2]);
    // printf("%p\n", &a[3]);
    char arr[5] = {'a', 't', 'y', 'r', 'x' };
    printf("%p\n", &arr[0]);
    printf("%p\n", &arr[1]);
    printf("%p\n", &arr[2]);
    printf("%p\n", &arr[3]);
    printf("%c", arr[2]);

    //type casting

    //char ch= 'A';
    //printf("%c", ch);
    //printf("%d" ,ch);
    //int x= (int)ch;
    //printf("%d" ,x);

    char ch = '\0';
    printf("%c", ch);
    printf("%d",ch);

  int i=0;
  while (arr[i]!='\0'){
    printf ("%c ", arr[i]);
    i++;
  }
    return 0;
}