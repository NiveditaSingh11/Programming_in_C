#include <stdio.h>
int main (){
    
    int arr[7] = {1, 3, 4, 9, 5, 8, 7};
    int sumEven =0;
    int sumOdd=0;
    for (int i = 0; i <= 6; i++)
    {
        if (i % 2 == 0)
      sumEven +=arr[i];

        else
        {
            sumOdd += arr[i];
        }
    }

   int res = sumEven - sumOdd;
   printf("%d",res);
    return 0;

}