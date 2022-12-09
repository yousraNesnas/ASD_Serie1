/** Ecrire un code en c qui affiche le signe de la formule b*x+c sans calcule*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b, x, c, s;

    //   (b ou x) et c == 0  =>>> null
    if ((b == 0 || x == 0) && c == 0)
    {
        printf("Le resultat est NULL!");
    }
    // sinon si ((b=0 ou x=0) et c<>0 )
    else if ((b == 0 || x == 0) && c != 0)
    {
        if (c < 0)
        {
            s = -1;
        }
        else
        {
            s = 1;
        }
    }

    else if (b < 0 && x < 0)
    {
        if (c < 0 && (b * x) < c)
        {
            s = -1;
        }
        else if (c < 0 && (b * x) > c)
        {
            // positif
            s = 1;
        }
    }
    
    else if (b > 0 && x > 0)
    {
        if (c < 0 && (b * x) < c)
        {
            s = -1;
        }
        else if (c < 0 && (b * x) > c)
        {
            // positif
            s = 1;
        }
    }
    else if (b < 0 || x < 0)
    {
        if (c > 0 && (b * x) < c)
        {
            s = 1;
        }
        else
        {
            // positif
            s = 1;
        }
    }

    if (s == -1)
    {
        printf("Le resultat de la formule serra negatif\n");
    }
    else
    {
        printf("Le resultat de la formule serra positif\n");
    }
}