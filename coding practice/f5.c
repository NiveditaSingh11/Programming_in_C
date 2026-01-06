#include <stdio.h>
int power (int a, int b){
    if(b==0) return 1;
    if(b==1) return a;
    return a* power (a , b-1);
}
int main (){
    int a;
    printf("enter the base :");
    scanf("%d",&a);
     int b;
    printf("enter the exponent :");
    scanf("%d",&b);

    int p = power (a,b);
    printf("%d", p);
    return 0;
}