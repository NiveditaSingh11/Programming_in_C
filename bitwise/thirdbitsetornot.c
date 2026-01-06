#include <stdio.h>
int main (){

    int num ;
    printf("enter the number to be checked :");
    scanf("%d",&num);
     int check ;
     int b; 
     b= num >>2 ;
     if (b &1 ) printf("the  third bit is set");
     else printf("the third bit is not set ");
     
    return 0; 

}