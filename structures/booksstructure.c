#include <Stdio.h>
#include <string.h>
int main (){

    struct book{
        char name [75];
        int noOfpages;
        float price;
    } a,b,c;

    a.noOfpages=100;
    a.price=420;
    strcpy (a.name, "toxic");
  
    printf("%d\n",a.noOfpages);
    printf("%f\n",a.price);
    printf("%s\n",a.name );
    

            return 0;
}