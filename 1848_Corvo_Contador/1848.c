#include <stdio.h>
#include <string.h>

int main()
{
    int soma = 0, i;
    char comando_do_corvo[8];
    for (i = 1; i <= 3; i++){
        gets(comando_do_corvo);
		
		//Enquanto o corvo não gritar, continuar somando as piscadas
        while(strcmp(comando_do_corvo, "caw caw") != 0){
			
            //Fórmula da notação posicional.
            //Como só há 3 digitos, dá para simplificar dessa forma.
            if(comando_do_corvo[2] == '*')
                soma++;
            if(comando_do_corvo[1] == '*')
                soma += 2;
            if(comando_do_corvo[0] == '*')
                soma += 4;
            gets(comando_do_corvo);
			
        }
		
		//Imprime o número i da loteria
        printf("%i\n",soma);
        soma = 0;
    }
    return 0;
}