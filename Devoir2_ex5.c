#include <stdio.h>

int main()
{
    int i, j, n;
    i = 0;
    n = i = i+1 ;// i++; // i=i+1
    printf("A : i = %d __ n = %d\n", i, n); //

    i = 10;
    n = ++i; // n = i+1 = i
    printf("B : i = %d __ n = %d\n", i, n);

    i = 20;
    j = 5;
    n = i++ * ++j;
    printf("C : i = %d __ j = %d __ n = %d\n", i, j, n);

    i = 15;
    n = i += 3; // i= i+3
    printf("D : i = %d __ n = %d\n", i, n);

    i = 3;
    j = 5;
    n = i *= --j; 
    printf("E : i = %d __ j = %d __ n = %d\n", i, j, n);

    return 0;
}