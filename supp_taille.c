#include <stdio.h>

int main(){
    float T1, T2, T3, a, b, c;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    if (a < b && b < c) 
    {
        T1 = a;
        T2 = b;
        T3 = c;
    }
    else if (b < a && a < c)
    {
        T1 = b;
        T2 = a;
        T3 = c;
    }
    else if (c < a && a < b)
    {
        T1 = c;
        T2 = a;
        T3 = b;
    }
    else if (a < c && c < b)
    {
        T1 = a;
        T2 = c;
        T3 = b;
    }
    else if (b < c && c < a)
    {
        T1 = b;
        T2 = c;
        T3 = a;
    }
    else if (c < b && b < c)
    {
        T1 = c;
        T2 = b;
        T3 = a;
    }

    printf("T1 %f   T1 %f   T1 %f", T1, T2, T3);
}