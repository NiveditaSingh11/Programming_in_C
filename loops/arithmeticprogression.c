#include <stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);

    for (int i=1; i<=(2*n-1);i=i+2){
        printf("%d\n",i);
    }
    //intial condition change kro aur terms ka expression change kro you will have a new ap.


    return 0;

}