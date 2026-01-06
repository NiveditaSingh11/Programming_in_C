#include <stdio.h>
void reverse (int arr[] , int si , int ei ){
    int i=si;
    int j= ei; 
    while (i<j){
         int temp = arr[i];
         arr[i] = arr[j];
         arr[j]= temp;
         i++;
         j--;
    }
}
int main (){
    int arr [7] = { 1,2,3,4,5,6,7}; //user se bhi input le sakte hain 
    //index 1-4 reverse !!

   reverse(arr , 1 ,4);


    for (int i=0; i<=6;i++){
        printf("%d  " ,arr[i] );
    }
    
    return 0;
}
//for reversing a part of array !!!!!
