#include <stdio.h>

int main()
{
    int n = 10, p = 5, q = 10, r;
 
    r = n == (p = q);
    printf("A : n = %d __ p= %d __ q= %d __ r= %d\n", n, p, q, r);

    n = p = q = 5;
    n += p += q;
    printf("B : n = %d __ p= %d __ q= %d\n", n, p, q);

    if (n < p)
    {
        q = n++;
    }
    else
    {
        q = p++;
    }
    printf("B : n = %d __ p= %d __ q= %d\n", n, p, q);

    if (n > p)
    {
        q = n++;
    }
    else
    {
        q = p++;
    }
    printf("B : n = %d __ p= %d __ q= %d\n", n, p, q);

    return 0;
}