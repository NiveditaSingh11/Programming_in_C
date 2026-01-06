#include <stdio.h>
int main(){
    int n ; 
    int arr[11]={1,9, 8,12, 5,7,10,15,6,11,13 };
    int i; 
    int k;
    int target =17;
    int count =0;

    for(i=0;i<=10;i++){
       // printf("enter the %dth number:", i+1);
       // scanf("%d", &arr[i]);

        //for(int i=0;i<=10;i++){
            for( k=i+1; k<10;k++){
                if((arr[i]+ arr[k])==target){
                    count ++;
                }
            }
        }
    
    printf("number of pairs = %d", count ); 
   // printf("%d %d", arr[i],arr[k]);
    return 0;
}
//#include <stdio.h>

//int main() {
  //  int n, target, i, j;
   // scanf("%d", &n);
   // int arr[n];
   // for(i = 0; i < n; i++)
    //    scanf("%d", &arr[i]);
  //  scanf("%d", &target);
  //  for(i = 0; i < n - 1; i++) {
   //     for(j = i + 1; j < n; j++) {
     //       if(arr[i] + arr[j] == target) {
       //         int duplicate = 0;
        //        for(int k = 0; k < i; k++) {
             //       if((arr[k] == arr[i] && arr[k+1] == arr[j]) || (arr[k] == arr[j] && arr[k+1] == arr[i])) {
              //          duplicate = 1;
              //          break;
               //     }
                //}
     //           if(!duplicate)
   //                 printf("%d %d\n", arr[i], arr[j]);
       //     }
//        }
  //  }
    //return 0;
//}