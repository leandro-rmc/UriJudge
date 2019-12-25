#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letras[28], letra[3];
    int quantidade,i;

    //Tenho consciência de que o gets é uma função insegura, mas como trata-se de um uso apenas didático...
    //...não vejo o porquê de complicar as coisas.
    while (gets(letras) != NULL){
        scanf("%i",&quantidade);
        for(i = 1; i <= quantidade; i++){
            scanf("%s",letra);
            printf("%c", letras[atoi(letra)-1]);
        }
        printf("\n");
        gets(letras);
    }

    return 0;
}