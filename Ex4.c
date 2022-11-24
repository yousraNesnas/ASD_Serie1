#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int carre, n;
    printf("Donnez un nombre n\n");
    scanf("%d",&n);
    carre = pow(n, 2);
    printf("le carré de %d est: %d",n,carre);
    return 0;
}

