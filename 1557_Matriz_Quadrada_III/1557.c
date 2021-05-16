#include <stdio.h>

//Divide um número por 10 várias vezes até que ele seja 0 e retorna a quantidade de digitos
//3540 -> 354 -> 35 -> 3 -> 0 | Vai retornar 4 nesse exemplo
int obter_total_digitos(int numero){
    int digitos = 0;
    do{
        digitos++;
        numero /= 10;
    }while(numero != 0);
    return digitos;
}

int main()
{
    int tamanho_matriz, i, j, k, maior_valor_da_matriz, maior_digito = 0, maior_digito_iteracao_atual = 0, multiplicador, valor;
    scanf("%i",&tamanho_matriz);
	
	//Caso a entrada seja 0, o algoritmo é finalizado
    while(tamanho_matriz > 0){
		
        //Essas variáveis são inicializadas aqui para que possam ser resetadas a cada iteração.
        multiplicador = 1;
        valor = 1;
		
        if (tamanho_matriz == 1){
			//Se a matriz for de ordem 1, o único valor dela será 1
            maior_valor_da_matriz = 1;
		}
        else{
            //O maior valor (caso não seja 1) é obtido através dessa fórmula: 2^(tamanho_matriz * 2 - 2)
            maior_valor_da_matriz = 2;
            for (i = 2; i <= tamanho_matriz * 2 - 2; i++)
              maior_valor_da_matriz *= 2;
        }
		
        maior_digito = obter_total_digitos(maior_valor_da_matriz);

        int matriz[tamanho_matriz][tamanho_matriz];
		
		//Percorre e preenche a matriz com os valores solicitados
        for(i = 0; i < tamanho_matriz; i++){
            for(j = 0; j < tamanho_matriz; j++){
                matriz[i][j] = valor;
                maior_digito_iteracao_atual = obter_total_digitos(valor);
				
                //Compara o total de digitos do maior valor com o valor atual para saber quantos espaços deve dar...
                //...antes de exibir o número na tela.
                for (k = 1; k <= maior_digito - maior_digito_iteracao_atual; k++)
                    printf(" ");
                printf("%i",matriz[i][j]);
				
                //Este bloco é aplicado somente para quando não estamos na última coluna.
                //Aqui determinamos que não se deve colocar espaço após o último valor de cada linha.
                if (j != tamanho_matriz-1){
                    valor *= 2;
                    printf(" ");
                }
            }
            printf("\n");
			
            //Bloco abaixo é aplicado apenas quando não é a última linha, pois é desnecessário.
            if (i != tamanho_matriz-1){
              multiplicador *= 2;
              valor = multiplicador;
            }
        }
		
        printf("\n");
        scanf("%i",&tamanho_matriz);
    };

    return 0;
}