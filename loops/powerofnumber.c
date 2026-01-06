#include <stdio.h>
int main(){
    int n;
    printf("enter base:");
    scanf("%d",&n);
     int m;
    printf("enter exponent:");
    scanf("%d",&m);
    int power=1;
    for(int i=1;i<=m;i++){
        power = power *n;
    }
    printf("%d raised to the power %d is %d",n,m,power);

return 0;
}