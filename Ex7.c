#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b,c;
    printf("Donnez un nombre a\n");
    scanf("%d", &a);
    printf("\nDonnez un nombre b\n");
    scanf("%d", &b);
    printf("a= %d et b= %d\n", a, b);
    
    c=a;
    a=b;
    b=c;
    printf("Les valeurs de a et b apres la permutation\n");
    printf("a= %d et b= %d\n", a, b);

    return 0;
}
