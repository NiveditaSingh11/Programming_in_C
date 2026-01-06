#include <stdio.h>
#include <stdbool.h>

int main (){
    int arr[7] ={1,2,3,4,5,6,7};
    int x=2;
    int idx=0; //index maintain karne le liye 
    bool flag = false;

    for (int i =0; i<=6;i++){
        if(arr[i]==x){
            flag = true;
            idx=i;
            break;
        }
    }

    if (flag == true){
        printf("%d is present in the array and index is %d",x ,idx);
    }
    else {
        printf("%d is not present in the array ",x);
    }
    return 0;
}