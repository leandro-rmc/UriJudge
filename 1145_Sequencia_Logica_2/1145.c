#include <stdio.h>

int main()
{
    int contador, quando_saltar, valor_de_salto, valor_final;
    scanf("%i %i", &valor_de_salto, &valor_final);
	
	//Inicialmente, o primeiro salto ocorrerá após um número de iterações igual a valor_de_salto
    quando_saltar = valor_de_salto;
	
    for (contador = 1; contador <= valor_final; contador++){
		
		//Verifica se o contador já é igual ao quando_saltar
        if (contador == quando_saltar){
            printf("%i\n", contador);
			//Incrementa o quando_saltar pelo valor_de_salto para que o salto ocorra quando o contador e o quando_saltar forem iguais novamente
            quando_saltar += valor_de_salto;
        }
        else{
			//Controle para não colocar espaço no final da linha
            if (contador != valor_final)
                printf("%i ", contador);
            else
                printf("%i", contador);
		}
    }
    return 0;
}