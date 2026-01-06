#include <stdio.h>
int main(){
   
    int l;
    printf("enter length :");
    scanf("%d",&l);

    int b;
    printf("enter breadth :");
    scanf("%d",&b);

    int area = (l*b);
    int perimeter = 2*(l+b);

    printf("%d %d",area,perimeter);
    printf("\n");

    if (area > perimeter){
        printf("area is greater than perimeter");
    }

    if (area < perimeter){
        printf("area is less than perimeter");
    }

    if (area==perimeter){
        printf("nothing");
    }



    return 0;

}