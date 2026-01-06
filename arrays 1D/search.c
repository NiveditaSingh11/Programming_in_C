#include <stdio.h>
void reverse(int arr[], int si, int ei)
{

}
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int x=9;
    int check =0; //0 means element is not present 
    for (int i=0; i<=6;i++){
        if (arr[i]==x){
            check=1;//1 means element is present !!
           
        break;
        }
    }
    if(check ==0){
         printf("%d is not present in the array ",x);
    }
    else {
         printf("%d is present in the array ",x);
    }
    return 0;
}