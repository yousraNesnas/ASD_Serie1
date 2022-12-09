#include <stdio.h>
#include <stdbool.h>

int main()
{
    int np, x;
    float prix;
    bool v; // defaul value false(0)

    printf("Donner le nbr des pages");
    scanf("%d", &np);

    if (np > 0 && np <= 50)
    {

        printf(" %d\n", np);
        prix = np * 4;
    }

    else if (np >= 51 && np <= 100)
    {
        prix = np * 3;
    }
    else if (np <= 101)
    {
        prix = np * 2.5;
    }


    printf(" if u are a student press 0 else 1 \n");
    scanf("%d", &v);
    // if x ==1
    printf(" le v : %d\n", v);
    if (!v) // !0 => 1
    {
        prix = (prix * 10 / 100);
    }

    printf(" le prix est : %f\n", prix);
}
