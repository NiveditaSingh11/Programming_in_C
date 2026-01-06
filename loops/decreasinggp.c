#include <stdio.h>
int main(){
    int n ;
    printf("enter a number :");
    scanf("%d",&n);
    float a = 100;

    for (float i=1;i<=n;i++){
        printf("%f",a);
        printf("\n");
        a = a/2 ;
    }


    
    return 0;
} 
//values change karke different decresing gps ban jayega!!