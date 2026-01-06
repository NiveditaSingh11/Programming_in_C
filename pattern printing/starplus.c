#include <Stdio.h>
int main()
{
    int n;
     printf("enter a number:");
     scanf("%d",&n);
     for (int i =1; i<=n;i++){
        for (int j =1;j<=n;j++){
            if(j==(n+1)/2 || i==(n+1)/2 ) printf("*");
            else printf("#");
        }
        printf("\n");
     }

    return 0;
}
//# ke jagah par koi aur symbol bhi print kar sakte hain!!