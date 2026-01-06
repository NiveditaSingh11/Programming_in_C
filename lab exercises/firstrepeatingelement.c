#include <stdio.h>
int main(){
    int arr[5];
    int i;
    int true =0;
    for (i=0;i<=4;i++ ){
         printf("enter the number %d :",i+1);
        scanf("%d", &arr[i]);
        printf("\n");
    
    
        for (int i=0; i<=4;i++){
            for(int k=i+1; k<=4;k++){
                if (arr[i]==arr[k]){
                    
                    if(arr[i]==arr[k]){
                        true =1;
                         break;
                    }
                   
                }
            }
            if(true)
            printf("repeating element %d\n", arr[i]);
            break;
        }
        if(!true){
            printf("no repeating element \n");
        }
    }
    return 0;
}