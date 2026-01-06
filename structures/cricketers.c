#include <stdio.h>
#include <string.h>
int main()
{

    typedef struct cricketer
    {
        char firstname[20];
        char lastname[20];
        int age;
        int noOfmatches;
        float average;
    } cricketer;

    cricketer arr[3];
    for (int i = 0; i < 3; i++)
    {
        char str[20];
        printf("enter the firstname:");
        scanf("%s", arr[i].firstname);
         printf("enter the lastname:");
        scanf("%s", arr[i].lastname);
        printf("enter the age:");
        scanf("%d", &arr[i].age);
        printf("enter the no. of matches:");
        scanf("%d", &arr[i].noOfmatches);
        printf("enter the average:");
        scanf("%f", &arr[i].average);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("name :%s %s ", arr[i].firstname, arr[i].lastname);
        printf("age:%d\n", arr[i].age);
        printf("number of matches:%d\n", arr[i].noOfmatches);
        printf("average :%f\n", arr[i].average);
    }
    return 0;
}
