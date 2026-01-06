#include <stdio.h>
int main()
{

    int n;
    printf("enter length:");
    scanf("%d", &n);
    int m;
    printf("enter breadth:"); // m should lie between 65 to 90 including both!
    scanf("%d", &m);

    for (int i=1; i<=n;i++){
        for(int j=65; j<=m;j++){
        char ch = (char)j;
        printf("%c",ch);

    }
    printf("\n");
    }
    return 0;
}
//mjo!!