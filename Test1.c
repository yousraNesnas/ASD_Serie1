#include <stdio.h>

int main()
{

    int p = 10;
    // char c ='05x'; // essayer avec cette valeur et les deux autres en comentaire
    char c ='x';
    // char c ='\x05';
    int k = p + c;

    printf("c = %c\n",c);

    printf("k = %d \n",k);

    char h = p +c ;
    printf("h = %c\n",h);

    return 0;

   
}
