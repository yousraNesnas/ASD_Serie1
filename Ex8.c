#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d;
    printf("Donnez un nombre a\n");
    scanf("%d", &a);
    printf("\nDonnez un nombre b\n");
    scanf("%d", &b);
    printf("\nDonnez un nombre c\n");
    scanf("%d", &c);
    printf("a= %d et b= %d et c=%d\n", a, b, c);
    d = a;
    a = c;
    c = b;
    b = d;
    printf("Les valeurs de a, b et c apres la permutation\n");
    printf("a= %d et b= %d et c=%d\n", a, b, c);

    return 0;
}
