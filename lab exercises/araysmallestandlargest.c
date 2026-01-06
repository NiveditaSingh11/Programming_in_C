#include <stdio.h>
int main (){
    int arr[5];
    int max =-1;
    int min =arr[0];
    for(int i=0;i<=4;i++){
        printf("enter the number %d :",i+1);
        scanf("%d", &arr[i]);
        printf("\n");
        
        if(max <arr[i]){
            max =arr[i];


        }
        if(arr[i]<min) min =arr[i];
    }    
    printf("%d  %d", max, min );
    return 0;
}