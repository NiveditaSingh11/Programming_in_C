#include <stdio.h>
int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);

    if (n%5==0 || n%3==0){
        printf("divisible by 3 or 5");
    }

    else {
        printf("not divisible");
    }

    return 0;
}