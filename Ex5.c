#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, somme, prod, diff;
    printf("Donnez un nombre a\n");
    scanf("%d", &a);
    printf("\nDonnez un nombre b\n");
    scanf("%d", &b);
    // calculer la somme
    somme = a + b;
    // calculer le produit
    prod = a * b;
    // calculer la diff
    diff = a - b;

    printf("La somme de %d et %d est: %d\n", a, b, somme);
    printf("Le produit de %d et %d est: %d\n", a, b, prod);
    printf("La difference entre %d et %d est: %d\n", a, b, diff);

    return 0;
}
