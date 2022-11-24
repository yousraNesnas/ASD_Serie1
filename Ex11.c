#include <stdio.h>

int main()
{
    int a, b, min;
    printf("Donnez deux valeurs a et b\n"); 
    //le caractère \n sert à sauter la ligne.
    printf("a= ");
    scanf("%d", &a);
    printf("\nb= ");
    scanf("%d", &b);
    if (a >= b)
    {
        // printf("Le min entre %d et %d est: %d", a,b,b);
        min = b;
    }
    else
    {
        // printf("Le min entre %d et %d est: %d", a,b,a);
        min = a;
    }
    printf("Le min entre %d et %d est: %d", a,b,min);
    return 0;
}


