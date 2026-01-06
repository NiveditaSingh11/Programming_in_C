#include <stdio.h>
int main (){
    int n ;
    printf("enter the n :");
    scanf("%d",&n);
     int m ; //m should lie between [65,90]
    printf("enter the m :");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        for(int j=65;j<=m;j++){ //j should between [65,90]
            char ch =(char)j;
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}