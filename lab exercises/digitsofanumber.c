#include <stdio.h>
int main (){
      int n;
    printf("enter the number :");
    scanf("%d",&n);

    int count =0;
   while(n!=0){
        n=n/10;
        count++;

    }
    printf("%d\n", count);

    for(int i=1;i<=n;i++){
        n=n/10;
        count++;
    }
    printf("%d\n", count);

    do{
        n=n/10;
        count = count++;
    }while (n!=0);
    

    printf("%d",count);

    return 0;

}