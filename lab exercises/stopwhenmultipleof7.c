#include <stdio.h>
int main (){
    int arr[5];
    int sum =0;

    for(int i=0;i<=4;i++){
        printf("enter the number %d :",i+1);
        scanf("%d", &arr[i]);
        if(arr[i]%7 ==0){
            break;

        }
        if(arr[i]%2==0){
        sum =sum +arr[i];

        }
    
    }
        printf("%d\n",sum);
    return 0;
}