#include <stdio.h>
int main(){

    int cp;
    printf("enter the cost price :");
    scanf("%d",&cp);

    int sp;
    printf("enter the selling price :");
    scanf("%d",&sp);

    if ((sp-cp)<0){
        printf("loss happened");
    }
    if((sp-cp)>0) {
        printf("profit happened");
    }
    if (sp==cp){
        printf("nothing");
    }
    
   


    return 0;
}