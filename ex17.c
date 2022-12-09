#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n, e;
    float prix;

    printf("Donnez le nombre de pages SVP!\n");
    scanf("%d", &n);

    if (n >= 0 && n <= 50)
    {
        prix = n * 4;
    }
    else if (n >= 51 && n <= 100)
    {
        prix = n * 3;
    }
    else if (n <= 101)
    {
        prix = n * 2.5;
    }

    printf("Le prix totale est: %f\n", prix);

    printf("SI vous etudiant, tapez 1 pour benificier d'une remise de 10\% si non 0\n");
    scanf("%d",&e);

    if (e == 1)
    {
        prix = (prix * 10) / 100;
    }

    printf(" le prix final est %f", prix);
}