#include <stdio.h>

int main()
{
    int menor = 500, i, j, temp;
    int lados[4];
    scanf("%i %i %i %i", &lados[0], &lados[1], &lados[2], &lados[3]);

    //Método bolha para organizar o vetor em ordem crescente.
    for (i = 0; i <= 3; i++){
        for (j = 0; j <= 2; j++){
            if (lados[j] > lados[j+1]){
                temp = lados[j+1];
                lados[j+1] = lados[j];
                lados[j] = temp;
            }
        }
    }
    //Igonoro o lado menor ou o maior e escolho os dois menores restantes para comparar com o maior restante.
    //Não tenho certeza ainda se daria certo ignorá-los dessa forma, porém os testes pelo uDebug deram positivos.
    //Acho que pode falhar em determinados casos, mas vou tentar.
    if (lados[1] + lados[2] > lados[3] || lados[0] + lados[1] > lados[2])
        printf("%c\n",'S');
    else
        printf("%c\n",'N');
    return 0;
}