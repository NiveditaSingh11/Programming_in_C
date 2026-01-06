#include <stdio.h>
int main (){
    int arr[5];
    

    for(int i=0;i<=4;i++){
        printf("enter the number %d :",i+1);
        scanf("%d", &arr[i]);
        if(arr[i]>0){
            arr[i]=arr[i];

        }
        if(arr[i]<0){
            arr[i]=0;
        }
        printf("%d\n",arr[i]);
    }
    
    return 0;
}