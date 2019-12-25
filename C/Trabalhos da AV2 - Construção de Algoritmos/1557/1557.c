#include <stdio.h>

int getTotalDigitos(int numero){
    int digitos = 0;
    do{
        digitos++;
        numero /= 10;
    }while(numero != 0);
    return digitos;
}

int main()
{
    int tam, i, j, k, maior, digitosMaior = 0, digitosAtual = 0, multiplicador, valor;

    scanf("%i",&tam);
    while(tam > 0){
        //Essas variáveis são inicializadas aqui para que possam ser resetadas a cada iteração.
        multiplicador = 1;
        valor = 1;
        if (tam == 1)
            maior = tam;
        else{
            //O maior valor (caso não seja 1) é obtido através dessa fórmula:
            //2^(tam*2-2)
            maior = 2;
            for (i = 2; i <= tam*2-2; i++)
              maior *= 2;
        }
        digitosMaior = getTotalDigitos(maior);

        int matriz[tam][tam];
        for(i = 0; i < tam; i++){
            for(j = 0; j < tam; j++){
                matriz[i][j] = valor;
                digitosAtual = getTotalDigitos(valor);
                //Compara o total de digitos do maior valor com o valor atual para saber quantos espaços deve dar...
                //...antes de exibir o número na tela.
                for (k = 1; k <= digitosMaior-digitosAtual; k++)
                    printf(" ");

                printf("%i",matriz[i][j]);
                //Este bloco é aplicado somente para quando não estamos na última coluna.
                //Aqui determinamos que não se deve colocar espaço após o último valor de cada linha.
                if (j != tam-1){
                    valor *= 2;
                    printf(" ");
                }
            }
            printf("\n");
            //Bloco abaixo é aplicado apenas quando não é a última linha, pois é desnecessário.
            if (i != tam-1){
              multiplicador *= 2;
              valor = multiplicador;
            }
        }
        printf("\n");
        scanf("%i",&tam);
    };

    return 0;
}