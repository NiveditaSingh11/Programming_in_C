#include <Stdio.h>
int main(){
    double  y, m , g, l, delta, b,d;
    printf("enter m :");
    scanf("%lf",&m);
    printf("enter l:");
    scanf("%lf",&l);
    printf("enter delta:");
    scanf("%lf",&delta);
    printf("enter b:");
    scanf("%lf",&b);
    printf("enter d:");
    scanf("%lf",&d);
 
    g=9.8;
    y = (m *g *(l)^3)/((4.0) * delta*b * (d)^3 );
    printf("%lf",y);
    
    return 0;

}