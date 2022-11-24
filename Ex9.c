#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, poly;
    printf("Donnez un nombre x\n");
    scanf("%d", &x);
    
    poly = (7*x*x*x)+(5*x*x)+15;
    printf("\n7*(%d)^3+5*(%d)^2+15 = %d",x,x,poly);
    return 0;
}
