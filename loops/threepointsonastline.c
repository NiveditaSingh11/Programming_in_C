#include<stdio.h>
int main(){

    int x1;
    printf("enter x1 :");
    scanf("%d",&x1); 

    
    int x2;
    printf("enter x2 :");
    scanf("%d",&x2); 

    int x3;
    printf("enter x3 :");
    scanf("%d",&x3); 

    int y1;
    printf("enter y1 :");
    scanf("%d",&y1); 

    int y2;
    printf("enter y2 :");
    scanf("%d",&y2); 

    int y3;
    printf("enter y3 :");
    scanf("%d",&y3); 

    if  ((y2-y1)/(x2-x1)==(y3-y1)/(x3-x1)){
        printf("the three points lie on the same straight line");

    }

    else {
        printf("not lying on same straight line ");
    }
    return 0;

}