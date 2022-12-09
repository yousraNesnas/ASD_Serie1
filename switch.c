/* soit a, b et c trois nombres entiers. Ecrire un code en C qui affiche :
   a+b => si c==1;
   a*b => si c==2;
   a/b => si c==3;
   a-b => si c==4;
*/
#include <stdio.h>
#include <stdlib.h> // whe must use this library when using switch

int main()
{
    int a, b, c, Resultat;

    printf("\nDonnez 2 nombre entiers a et b\n");
    scanf("%d", &a);
    scanf("%d", &b);

    printf("\nTapez : \n1 pour la somme \n2 pour le produit \n3 pour la division \n4 pour la soustraction\n");
    scanf("%d", &c);

    switch (c)
    {
    case 1:
        Resultat = a + b;
        break;
    case 2:
        Resultat = a * b;
        break;
    case 3:
        Resultat = a / b;
        break;
    case 4:
        Resultat = a - b;
        break;

    default:
        printf("\nErreur! Vous devez choisir un nombre entre 1 et 4");
        break;
    }

    printf("\nResultat = %d", Resultat);

    return 0;
}
