#include <stdio.h>
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);

    int a=1;
    int b=1;
    int sum =1;

    for (int i=1; i<=n-2;i++){
        sum = a+b;
        a=b;
        b=sum;
        printf("%d ",sum);
    }

//1 1 2 3 5 8 13 21 34....... so on ---->fibonacci series!!
//sum = a+b , a=b &b=sum----> a smart move!!
//print karte time a ko print karna 

    return 0;
}
