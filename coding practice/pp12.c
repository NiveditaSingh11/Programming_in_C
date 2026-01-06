#include <stdio.h>
int main (){
    int n ;
    printf("enter the n :");
    scanf("%d",&n);
     int m ;
    printf("enter the m :");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==1||j==1||j==m||i==n){
                printf("*");
            }
            else printf("#");
        }
        printf("\n");
    }
    return 0;
}