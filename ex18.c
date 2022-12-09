#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    int a, b, c, d, x1, x2;
    float x;
    const int k = 4;

    printf("\ndonnez a : ");
    scanf("%d", &a);

    printf("\ndonnez b : ");
    scanf("%d", &b);

    printf("\ndonnez c : ");
    scanf("%d", &c);

    if (a == 0 && b == 0 && c == 0)
    {
        printf("resultat infini");
        return 0;
    }
    else if (a == 0)
    {
        x = -(b / c);
        printf("\nx = %d\n", x);
    }
    else if (b == 0)
    {
        printf("\nno solution");
    }
    else
    {
        
        d = (b * b) - 4 * a * c;

        if (d > 0)
        {
            x1 = (-b - sqrt(d)) / (2 * a);
            x2 = (-b + sqrt(d)) / (2 * a);
            printf("\nx1 = %d\n", x1);
            printf("\nx2 = %d\n", x2);
        }
        else if (d == 0)
        {
            x = -b / (2 * a);
            printf("\nx = %d\n", x2);
        }
        else
        {
            printf("\nno solution");
        }
    }

    return 0;
}