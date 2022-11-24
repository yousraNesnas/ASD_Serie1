#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d%d", &a, &b);
    b = 1;
    c = 2;
    d = 3;
    scanf("%d", &c);
    c = a + d;
    printf("%d, %d, %d, %d", a, b, c, d);
    return 0;
}


