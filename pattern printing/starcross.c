#include <stdio.h>
int main(){
     int n ;
    printf("enter length:");
    scanf("%d",&n);

    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){ //agar j<=i karenge toh pura print nhi hoga kyunki upar triangle mein j>i hai
            if (i==j || i+j==(n+1))
            printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
//mjo