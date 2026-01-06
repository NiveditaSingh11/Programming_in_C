#include <stdio.h>
int main (){
    int arr[7] ={ 1,2,3,4,5,6,7};
    int sum=0;
    for (int i=0; i<=6;i++){
        sum = sum + arr[i];

    }
    int sum2= (7*(7+1))/2;
    int x= sum2 - sum ; 
    printf("the missing number is: %d " , x);


    return 0;
}
