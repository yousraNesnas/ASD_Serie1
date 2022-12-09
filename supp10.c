// Soit deux nombre X et Y. Ranger dans X la plus petite valeur et dans Y la plus grande.
#include <stdio.h>

int main()
{
    int x, y, c;

    scanf("%d", &x);
    scanf("%d", &y);

    if (x > y)
    { // y=x , x=y
        c = x;
        x = y;
        y = c;
    }
    else
    {
        c = y;
        y = x;
        x = c;
    }
    
    printf("\n X = %d    Y = %d \n", x, y);
}