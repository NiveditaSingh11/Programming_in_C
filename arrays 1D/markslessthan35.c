#include <stdio.h>
int main(){
    int marks[10];
     for (int i= 0; i<=9;i++){
        printf("enter element %d :", i+1);
        scanf("%d", &marks[i]);
     }

     for (int i=0;i<10;i++){
        if (marks[i]<35){
            printf("%d\n",i );   // agar i ke jagah marks[i] hota toh marks print hota !!
        }
     }



    return 0;
}