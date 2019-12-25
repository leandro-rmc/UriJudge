#include <stdio.h>
#include <string.h>

int main()
{
    int soma = 0, cont;
    char comando[8];
    for (cont = 1; cont <= 3; cont++){
        gets(comando);
        while(strcmp(comando,"caw caw") != 0){
            //Fórmula da notação posicional.
            //Como só há 3 digitos, dá para simplificar dessa forma.
            if(comando[2] == '*')
                soma++;
            if(comando[1] == '*')
                soma += 2;
            if(comando[0] == '*')
                soma += 4;
            gets(comando);
        }
        printf("%i\n",soma);
        soma = 0;
    }
    return 0;
}