#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// pour pouvoir utiliser le type bool il faut ajouter la bib stdbool.h
#include <stdbool.h>
int main()
{
    float a, val;
    bool x;

    printf("Donnez un nombre a\n");
    scanf("%f", &a);

    printf("Tapez 1 si vous voullez utiliser la fonction (abs) et 0 pour if/else\n");
    scanf("%d", &x);
    // if(x==1)=> true else false
    if (!x) // si on tape 1 la valeur de !x serra 0 
    {
        printf("Vous etes dans if/else\n");
        if (a >= 0)
            val = a;
        else
            val = -a;
    }
    else
    {
        printf("utilisation de abs\n");
        val = abs(a);
    }

    printf("La val absolue de %f est %f", a, val);

    return 0;
}
