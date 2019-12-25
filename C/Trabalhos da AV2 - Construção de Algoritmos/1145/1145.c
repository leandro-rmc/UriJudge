#include <stdio.h>

int main()
{
    int cont,nPular,x,y;
    scanf("%i %i",&x,&y);
    nPular = x;
    for (cont = 1; cont <= y; cont++){
        if (cont == nPular){
            printf("%i\n",cont);
            nPular += x;
        }
        else
            if (cont != y)
                printf("%i ",cont);
            else
                printf("%i",cont);
    }
    return 0;
}