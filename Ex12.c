#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Donnez trois nombres\n");
    scanf("%d %d %d", &a, &b, &c);
    /*lorsqu'on a une seule instruction dans le "if"
    il n'est pas necéssaire de mettre les {}*/
    if (a >= b && c >= b)
        printf("Le min est %d\n", b);
    else
    {
        if (b >= a && c >= a)
            printf("le min est %d\n", a);
        else
            printf("le min est %d\n", c);
    }
    return 0;
}



