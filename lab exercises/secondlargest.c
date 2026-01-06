#include <stdio.h>
int main (){
    int arr[5];
    int max =-1;
    int smax=-1;
    for(int i=0;i<=4;i++){
        printf("enter the number %d :",i+1);
        scanf("%d", &arr[i]);
        printf("\n");
        
        if(max <arr[i]){
            max =arr[i];
        }
        if(arr[i]!=max && smax <arr[i]) smax =arr[i];
    }    
    printf("%d  %d", max, smax);
    return 0;
}