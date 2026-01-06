#include <stdio.h>
void reverse(int arr[], int si, int ei)
{
    int i = si;
    int j = ei;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    return;
}
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7}; // user se bhi input le sakte hain
    int n = 7;
    int k = 3;
    //n is number of elements of array 
    //k is number of elements
    // steps
    k = k % n;
    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);

    for (int i = 0; i <= 6; i++)
    {
        printf("%d  ", arr[i]);
    }

    return 0;
} 
//si -----> starting index 
// ei ------> ending index 