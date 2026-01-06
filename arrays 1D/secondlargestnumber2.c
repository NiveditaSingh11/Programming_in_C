#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[7] = {1,3,2,4, 5,3,4};
    int max = INT_MIN ; //SABSE CHOTA NUMBER 
       
       int smax = INT_MIN;
     for (int i=0 ; i<=6;i++){
       if (max <arr[i]){
        smax = max; //smax is now previous max 
        max = arr[i];//max is now a new max 
       }

       else if (smax<arr[i]&&max!=0){
        smax= arr[i];
       }
    }
     printf("%d\n",max);
       printf("%d",smax);
    return 0;
}
//mast gjb khatarnaak!!!!