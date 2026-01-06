#include <stdio.h>
int main()
{
    // given a point (x,y) , finding whether it lies on x axis , y axis aor origin

    int x;
    printf("enter x coordinate :");
    scanf("%d", &x);
    int y;
    printf("enter y coordinate :");
    scanf("%d", &y);

    if (x == 0 && y != 0)
    {
        printf(" lies on y axis");
    }
    else
    {
        if (y == 0 && x != 0)
        {
            printf("lies on x axis ");
        }

        else{
            if (x!=0 && y!=0){
                printf("lies on coordinate plane except x axis y axis and origin");

            }
            else{
                printf("lies on origin");
            }
            
        }
        
        
            
        
    }
    return 0;
}