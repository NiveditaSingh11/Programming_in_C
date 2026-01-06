#include <stdio.h>
int factorial(int n)
{
    if (n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main(){
    int n;
    printf("enter a number :");
    scanf("%d", &n);
    int fact = factorial (n);
    printf("%d",fact);
return 0;
}
// int factorial (int n){
//     int fact =1;
//    for (int i=1; i<=n;i++){
//       fact = fact *i;
//   }
//   return fact;
//   }