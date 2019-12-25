#include <stdio.h>
#define TAM 12

int main()
{
    double matriz[TAM][TAM], resultado = 0;
    char acao;
    int i,j,contElementos = 0;
    scanf("%c",&acao);

    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            scanf("%lf",&matriz[i][j]);
        }
    }

    for (i = TAM-1; i >= TAM/2+1; i--){
        for(j = i-1; j >= TAM-i; j--){
            resultado += matriz[i][j];
            contElementos++;
        }
    }
    if (acao == 'M')
        resultado /= contElementos;
    printf("%.1f\n",resultado);
    return 0;
}