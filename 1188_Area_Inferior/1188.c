#include <stdio.h>
#define TAMANHO_MATRIZ 12

int main()
{
    double matriz[TAMANHO_MATRIZ][TAMANHO_MATRIZ], elementos_somados = 0;
    char operacao;
    int i, j, qt_elementos = 0;
    scanf("%c",&operacao);

	//Percorre e preenche a matriz inteira
    for(i = 0; i < TAMANHO_MATRIZ; i++){
        for(j = 0; j < TAMANHO_MATRIZ; j++){
            scanf("%lf",&matriz[i][j]);
        }
    }

	//Percorre a parte inferior da matriz (imagem no link do uri)
    for (i = TAMANHO_MATRIZ - 1; i >= (TAMANHO_MATRIZ / 2) + 1; i--){
        for(j = i - 1; j >= TAMANHO_MATRIZ - i; j--){
			//Calcula a soma de todos os elementos encontrados
            elementos_somados += matriz[i][j];
			//Armazena a quantidade de todos os elementos encontrados
            qt_elementos++;
        }
    }
	
	//Se a operação escolhida for M (média), pega a soma dos elementos e divide pela quantidade
	//Caso contrário, nem é necessário fazer nada, basta printar a soma
    if (operacao == 'M')
        elementos_somados /= qt_elementos;
    printf("%.1f\n", elementos_somados);
    return 0;
}