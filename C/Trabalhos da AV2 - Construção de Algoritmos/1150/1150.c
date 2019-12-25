#include <stdio.h>

int main()
{
    int x,z,cont;
    cont = 1;
    scanf("%i",&x);
    do
        scanf("%i",&z);
    while (z <= x);
    while (z > x * cont + cont)
        cont++;
    printf("%i\n",cont);
    return 0;
}